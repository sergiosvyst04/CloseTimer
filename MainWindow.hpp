#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QTimer>
#include <QSpinBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void settimer();

private:
    QTimer *timer;
//    QSpinBox *box;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_HPP
