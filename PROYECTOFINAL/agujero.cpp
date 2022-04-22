#include "agujero.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QtMath>

agujero::agujero()
{
    setPixmap(QPixmap(":/new/files/FINALP/negro2.png"));
    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(mover()));
    //connect(timer,SIGNAL(timeout()),this,SLOT(shot()));
    timer->start(50);
}

void agujero::mover()
{
static float cont = 0;
float Y = y()+20*qSin(qDegreesToRadians(cont));
cont += 7.0f;
setPos(Y,Y);
}

