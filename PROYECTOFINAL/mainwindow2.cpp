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

    for(int n=0;n<50;n++){
        int random_x= rand() %700;
        int random_y= rand() %700;
        rocas.push_back(new obstaculos(random_x,random_y,20,20));
        scene->addItem(rocas.back());
    }



    enemy* enave = new enemy();
    enemy* enave2 = new enemy();
    agujero *hole= new agujero();
    agujero *hole2= new agujero();
    planeta *marte = new planeta();

    hole->setPos(20,80);
    hole2->setPos(20,350);
    enave->setPos(100,30);
    enave2->setPos(100,330);
    marte->setPos(-200,95);


    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,650,590);

    Score = new score();
    scene->addItem(Score);

    scene->addItem(nave);
    scene->addItem(enave);
    scene->addItem(enave2);
    scene->addItem(hole);
    scene->addItem(hole2);
    scene->addItem(marte);

    QTimer *timer = new QTimer();
    QTimer *timer1 = new QTimer();
    connect(timer,SIGNAL(timeout()),enave2,SLOT(shot()));
    connect(timer,SIGNAL(timeout()),enave,SLOT(shot2()));
    connect(timer1,SIGNAL(timeout()),this,SLOT(Actualizar()));
    timer->start(800);
    timer1->start(1000);



}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::Actualizar()
{
    count--;
    ui->lcdNumber->display(count);
    if(count==0){
        scene->clear();
        GameOver("TIEMPO TERMINADO.");
}}


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

void MainWindow2::GameOver(QString textToDisplay)
{
    for(size_t i=0, n = scene->items().size(); i < n ; i++){
        scene->items()[i]->setEnabled(false);
    }
    drawPanel(0,0,800,1300,QColorConstants::Svg::purple,1);
    QGraphicsTextItem *text = scene->addText(textToDisplay);
    text->setPos(300, 300);
}

void MainWindow2::drawPanel(int x, int y, int width, int height, QColor color, double opacity)
{
    QGraphicsRectItem* panel = new QGraphicsRectItem(x,y,width,height);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(color);
    panel->setBrush(brush);
    panel->setOpacity(opacity);
    scene->addItem(panel);
}





