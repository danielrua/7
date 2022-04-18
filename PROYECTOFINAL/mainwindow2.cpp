#include "mainwindow2.h"
#include "ui_mainwindow2.h"

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    nave = new personajes(500,250,50);
    scene = new QGraphicsScene();
    enemigos = new enemy(50,50,50);
    enemigo2 = new enemy(50,450,50);

    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,650,590);


    scene->addItem(nave);
    scene->addItem(enemigos);
    scene->addItem(enemigo2);

}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_W){
        if(event->key()==Qt::Key_D){
        nave->MoveRight();}
        else if(event->key()==Qt::Key_A){
        nave->MoveLeft();}
        else{nave->MoveUp();}
}
    else if(event->key()==Qt::Key_S){
        if(event->key()==Qt::Key_D){
        nave->MoveRight();}
        else if(event->key()==Qt::Key_A){
        nave->MoveLeft();}
        else{nave->MoveDown();}
}
    else if(event->key()==Qt::Key_D){
        nave->MoveRight();
        }
    else if(event->key()==Qt::Key_A){
        nave->MoveLeft();
    }
    else if(event->key()==Qt::Key_Space){
        nave->Disparar();
    }
}
