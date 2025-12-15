#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    updateUi();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateUi()
{
    ui->txtResult->setText(QString::number(counter));
    ui->labelInfo->setText(
        "Painiketta Count painettu " + QString::number(counter) + " kertaa"
        );
}


void MainWindow::on_ekanappi_clicked()
{
    counter++;
    updateUi();

}


void MainWindow::on_tokanappi_clicked()
{
    counter = 0;
    updateUi();
}
