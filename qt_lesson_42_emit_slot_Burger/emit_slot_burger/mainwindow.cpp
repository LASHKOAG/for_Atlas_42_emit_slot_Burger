#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(this, &MainWindow::signalWater, this, &MainWindow::changeWater);
    connect(this, &MainWindow::signalBurger, this, &MainWindow::changeBurger);
    connect(this, &MainWindow::signalPotato, this, &MainWindow::changePotato);

    connect(this, &MainWindow::signalWater, this, &MainWindow::priceAll);
    connect(this, &MainWindow::signalWater, this, &MainWindow::priceOwner);

    listInt.push_back(15);
    listInt.push_back(25);

    listCar.append(bmw);
    listCar.append(toyota);
    listCar.append(lada);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnWater_clicked()
{
    emit signalWater();
}

void MainWindow::changeWater()
{
    ++m_count_water;
    ui->lblWater->setText(QString::number(m_count_water));
}

void MainWindow::on_btnBurger_clicked()
{
    emit signalBurger();
}

void MainWindow::changeBurger()
{
    ++m_count_burger;
    ui->lblBurger->setText(QString::number(m_count_burger));
}

void MainWindow::on_btnPotate_clicked()
{
    emit signalPotato();
}

void MainWindow::changePotato()
{
    ++m_count_potato;
    ui->lblPotato->setText(QString::number(m_count_potato));
}

void MainWindow::priceAll()
{
    int result = m_count_water * m_price_water;
    ui->lineEditAllCash->setText(QString::number(result));

    listCar[0].color = "black";
    listCar.

}

void MainWindow::priceOwner()
{
    int result = m_count_water * m_price_water * 0.3;
    ui->lineEditOwnerCash->setText(QString::number(result));
}
