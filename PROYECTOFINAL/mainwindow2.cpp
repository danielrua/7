#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include <QTimer>
#include <stdlib.h>
//#include <QMediaPlayer>

//MainWindow2 *GameScreen;

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    nave = new personajes(700,250,50);
    scene = new QGraphicsScene();

    for(int n=0;n<36;n++){
        int random_x= rand() %700;
        int random_y= rand() %700;
        rocas.push_back(new obstaculos(random_x,random_y,20,20));
        scene->addItem(rocas.back());
    }



    enemy* enave = new enemy();
    enemy* enave2 = new enemy();
    enave->setPos(100,30);
    enave2->setPos(100,330);


    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,650,590);

    Score = new score();
    scene->addItem(Score);

    scene->addItem(nave);
    scene->addItem(enave);
    scene->addItem(enave2);

    QTimer *timer = new QTimer();
    QTimer *timer2 = new QTimer();
    connect(timer,SIGNAL(timeout()),enave2,SLOT(shot()));
    connect(timer,SIGNAL(timeout()),enave,SLOT(shot2()));
    connect(timer2,SIGNAL(timeout()),this,SLOT(Actualizar()));
    timer->start(800);
    timer2->start(1000);



}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::Actualizar()
{
    count--;
    ui->lcdNumber->display(count);
    if(count==0)
        timer->stop();
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





