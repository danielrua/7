#include "balas.h"
#include <QGraphicsScene>
#include <QTimer>
#include <QList>
#include <obstaculos.h>
#include <balas2.h>
#include <balas3.h>
#include "mainwindow2.h"

balas::balas()
{
    setPixmap(QPixmap(":/new/files/FINALP/shot.png"));
    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    connect(timer,SIGNAL(timeout()),this,SLOT(acelerar()));
    timer->start(50);


}

void balas::move()
{
    QList<QGraphicsItem *>colliding_items= collidingItems();

    for(int i=0, n=colliding_items.size();i<n;i++){
        if(typeid(*(colliding_items[i]))==typeid(obstaculos) or typeid(*(colliding_items[i]))==typeid(balas2) or typeid(*(colliding_items[i]))==typeid(balas3)){
            delete colliding_items[i];
            delete this;
            return;
        }
    }
   setPos(x()-(10*acelerar()),y());
   if(pos().x()+pixmap().height()<-70){
       scene()->removeItem(this);
       delete this;
   }
}

int balas::acelerar(int cont){
    cont = cont+2;
    return cont;
}
