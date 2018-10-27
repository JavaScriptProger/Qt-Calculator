#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button1_clicked()
{
    this->add(1);
    if(this->number_index == 1){
        this->number.append(QString::number(1));
    } else {
        this->number.append(QString::number(1));
    }

    ui->label->setText(this->number);
}

void MainWindow::on_button2_clicked()
{
    this->add(2);
    if(this->number_index == 1){
        this->number.append(QString::number(2));
    } else {
        this->number.append(QString::number(2));
    }

    ui->label->setText(this->number);
}

void MainWindow::on_button3_clicked()
{
    this->add(3);
    if(this->number_index == 1){
        this->number.append(QString::number(3));
    } else {
        this->number.append(QString::number(3));
    }

    ui->label->setText(this->number);
}

void MainWindow::on_button4_clicked()
{
    this->add(4);
    if(this->number_index == 1){
        this->number.append(QString::number(4));
    } else {
        this->number.append(QString::number(4));
    }

    ui->label->setText(this->number);
}

void MainWindow::on_button5_clicked()
{
    this->add(5);
    if(this->number_index == 1){
        this->number.append(QString::number(5));
    } else {
        this->number.append(QString::number(5));
    }

    ui->label->setText(this->number);
}

void MainWindow::on_button6_clicked()
{
    this->add(6);
    if(this->number_index == 1){
        this->number.append(QString::number(6));
    } else {
        this->number.append(QString::number(6));
    }

    ui->label->setText(this->number);
}

void MainWindow::on_button7_clicked()
{
    this->add(7);
    if(this->number_index == 1){
        this->number.append(QString::number(7));
    } else {
        this->number.append(QString::number(7));
    }

    ui->label->setText(this->number);
}

void MainWindow::on_button8_clicked()
{
    this->add(8);
    if(this->number_index == 1){
        this->number.append(QString::number(8));
    } else {
        this->number.append(QString::number(8));
    }

    ui->label->setText(this->number);
}

void MainWindow::on_button9_clicked()
{
    this->add(9);
    if(this->number_index == 1){
        this->number.append(QString::number(9));
    } else {
        this->number.append(QString::number(9));
    }

    ui->label->setText(this->number);
}

void MainWindow::on_button0_clicked()
{
    this->add(0);
    if(this->number_index == 1){
        this->number.append(QString::number(0));
    } else {
        this->number.append(QString::number(0));
    }

    ui->label->setText(this->number);
}

void MainWindow::on_plus_clicked()
{
    this->number_index = 2;
    this->SNumber1 = this->number;
    this->number = "";
    this->mode = 1;
}

void MainWindow::on_minus_clicked()
{
    this->number_index = 2;
    this->SNumber1 = this->number;
    this->number = "";
    this->mode = 2;
}

void MainWindow::on_multi_clicked()
{
    this->number_index = 2;
    this->SNumber1 = this->number;
    this->number = "";
    this->mode = 3;
}

void MainWindow::on_divine_clicked()
{
    this->number_index = 2;
    this->SNumber1 = this->number;
    this->number = "";
    this->mode = 4;
}

void MainWindow::on_result_clicked()
{
    int n1 = this->number.toInt();
    int n2 = this->SNumber1.toInt();
    int r = 0;

    switch(this->mode)
    {
        case 1:
            r = n1 + n2;
            break;
        case 2:
            r = n2 - n1;
            break;
        case 3:
            r = n1 * n2;
            break;
        case 4:
            r = n2 / n1;
            break;
    }

    ui->label->setText(QString::number(r));
}

void MainWindow::on_buttonC_clicked()
{
    this->number_index = 1;
    this->number = "";
    this->SNumber1 = "";
    this->mode = 0;
    ui->label->setText("0");
}
