#include "balas.h"
#include <QGraphicsScene>
#include <QTimer>

balas::balas()
{
    setRect(-38,38,50,10);
    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);


}

void balas::move()
{
   setPos(x()-10,y());
   if(pos().x()+rect().height()<-70){
       scene()->removeItem(this);
       delete this;
   }
}
