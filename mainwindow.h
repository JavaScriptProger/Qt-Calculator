#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QDebug"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    int number1[10] = {0};
    int number2[10] = {0};
    int index = 1;
    int result;
    int mode;
    int number_index = 1;
    char text[255];
    QString number;
    QString SNumber1;

    void add(int n){
        if(this->number_index == 1) this->number1[this->index] = n;
        else this->number2[this->index] = n;

        this->index+=1;
    }

private slots:
    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

    void on_button0_clicked();

    void on_plus_clicked();

    void on_minus_clicked();

    void on_multi_clicked();

    void on_divine_clicked();

    void on_result_clicked();

    void on_buttonC_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
