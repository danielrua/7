#include "balas2.h"
#include <QGraphicsScene>
#include <QTimer>
#include <mainwindow2.h>

balas2::balas2()
{
    setPixmap(QPixmap(":/new/files/FINALP/eshota.png"));
    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);


}

void balas2::move()
{
   setPos(x()+10,y()-2);
   if(pos().x()+pixmap().height()>600){
       scene()->removeItem(this);
       delete this;
   }
}
