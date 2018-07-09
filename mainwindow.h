#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include "room.h"
#include "adayinthelife.h"
#include <iostream>
#include <string>
#include <map>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    ADayInTheLife life;
    Room *currentRoom;
    //Pointer to MainWindow
    Ui::MainWindow *ui;
    void updateRooms();
    void updateRoomImage();
    void updateRoomImage(QString image);
    void changeRoom(int direction);

public:

    //Why set parent QWidget pointer to 0
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:

    void on_pushButton_0_0_clicked();
    void on_pushButton_0_1_clicked();
    void on_pushButton_1_0_clicked();
    void on_pushButton_1_1_clicked();
    void on_pushButton_1_2_clicked();
    void on_pushButton_1_3_clicked();
    void on_pushButton_1_4_clicked();

};

#endif // MAINWINDOW_H
