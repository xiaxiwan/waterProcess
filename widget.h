﻿#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_borderWidthSlider_valueChanged(int value);

    void on_processSlider_valueChanged(int value);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H