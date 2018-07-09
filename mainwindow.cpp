#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "room.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    updateRoomImage();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Updates the pushbutton Rooms
void MainWindow::updateRooms(){

    Room *room = life.getCurrentRoom();

    //Current
    ui->pushButton_1_0->setText(room->shortDescription());
    ui->pushButton_1_6->setText(room->shortDescription());

    //North
    ui->pushButton_1_1->setText(life.getNorthRoom(room)->shortDescription());

    //East
    ui->pushButton_1_2->setText(life.getEastRoom(room)->shortDescription());

    //South
    ui->pushButton_1_3->setText(life.getSouthRoom(room)->shortDescription());

    //West
    ui->pushButton_1_4->setText(life.getWestRoom(room)->shortDescription());

}

void MainWindow::updateRoomImage(){

    Room *room = life.getCurrentRoom();

    QPixmap currentRoomBackground("/Users/Daniel/Pictures/ADayInTheLife/"+room->getImageLocation());
    currentRoomBackground = currentRoomBackground.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, currentRoomBackground);
    this->setPalette(palette);
}

void MainWindow::updateRoomImage(QString image){

    QPixmap currentRoomBackground("/Users/Daniel/Pictures/ADayInTheLife/"+image);
    currentRoomBackground = currentRoomBackground.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, currentRoomBackground);
    this->setPalette(palette);
}

void MainWindow::changeRoom(int direction)
{
    life.goRoom(direction);
    updateRoomImage();
    updateRooms();
}


//Start, Load first room
void MainWindow::on_pushButton_0_0_clicked(){

    ui->stackedWidget->setCurrentIndex(1);
    updateRoomImage("menu.png");
    updateRooms();


}
//Exit
void MainWindow::on_pushButton_0_1_clicked(){

    exit(0);
}

//Current Room
void MainWindow::on_pushButton_1_0_clicked(){

}

//NORTH
void MainWindow::on_pushButton_1_1_clicked(){

    changeRoom(NORTH);
}

//EAST
void MainWindow::on_pushButton_1_2_clicked(){

    changeRoom(EAST);
}

//SOUTH
void MainWindow::on_pushButton_1_3_clicked(){

    changeRoom(SOUTH);
}

//WEST
void MainWindow::on_pushButton_1_4_clicked(){

    changeRoom(WEST);
}
