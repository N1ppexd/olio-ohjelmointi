#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnCount_clicked()
{
    counter++;
    QString s = QString::number(counter);
    QString labelText = "Painiketta painettu " + s + " kertaa";
    ui->labelInfo->setText(labelText);

    ui->txtResult->setText(s);

}


void Widget::on_btnReset_clicked()
{
    counter = 0;
    QString labelText = "Painiketta painettu 0 kertaa";
    ui->labelInfo->setText(labelText);

    ui->txtResult->setText("0");
}

