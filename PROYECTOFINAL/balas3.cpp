#include "balas3.h"
#include <QGraphicsScene>
#include <QTimer>
#include <mainwindow2.h>

balas3::balas3()
{
    setRect(-38,38,50,10);
    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);


}

void balas3::move()
{
   setPos(x()+10,y()+2);
   if(pos().x()+rect().height()>600){
       scene()->removeItem(this);
       delete this;
   }
}
