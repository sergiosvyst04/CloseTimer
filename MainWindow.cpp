#include "MainWindow.hpp"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer;

    connect(ui->spinBox, &QSpinBox::editingFinished, this ,&MainWindow::settimer);
    connect(timer, &QTimer::timeout, this, &MainWindow::close);
}

void MainWindow::settimer()
{
    timer->start(ui->spinBox->value() * 1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}
