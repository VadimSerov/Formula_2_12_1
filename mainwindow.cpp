#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
   double x = ui->lineEdit->text().toDouble();
   ui->label->setText(QString::number(pow(x*x +2.7*M_PI*cos(sqrt(abs(x*x*x)))-2+exp(x),0.1428571428571428),'g',15));
}
