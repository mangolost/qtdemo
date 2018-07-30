#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "student.h"

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

void MainWindow::on_pushButton_clicked()
{
    Student student = Student();

//        cout << student.getName() << endl;
//        cout << student.getAge() << endl;

//        cout << student.isChild() << endl;
    ui->pushButton->setText(QString::fromStdString(student.getName()));
}
