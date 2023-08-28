#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

#include <QList>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int m_count_water{0};
    int m_count_burger{0};
    int m_count_potato{0};

    const int m_price_water{90};
    const int m_price_burger{300};
    const int m_price_potato{54};

    struct Car
    {
        QString color;
        int number;
    };

    Car bmw;
    Car toyota;
    Car lada;


    QList <int> listInt;
    QList <Car> listCar;


signals:
    void signalWater();
    void signalBurger();
    void signalPotato();

private slots:
    void on_btnWater_clicked();
    void changeWater();

    void on_btnBurger_clicked();
    void changeBurger();

    void on_btnPotate_clicked();
    void changePotato();


    void priceAll();
    void priceOwner();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
