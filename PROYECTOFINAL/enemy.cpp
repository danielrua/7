#include "enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QtMath>
#include "balas2.h"
#include "balas3.h"


enemy::enemy()
{
    setRect(-38,38,10,10);
    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(mover()));
    //connect(timer,SIGNAL(timeout()),this,SLOT(shot()));
    timer->start(50);
}

void enemy::mover()
{
static float cont = 0;
float X = x()+10*qCos(qDegreesToRadians(cont));
cont += 5.0f;

float Y = y()+10*qSin(qDegreesToRadians(cont));
cont += 5.0f;
setPos(X,Y);
}

void enemy::shot()
{
    balas2 * shot = new balas2();
    shot->setPos(x(),y());
    scene()->addItem(shot);
}

void enemy::shot2()
{
    balas3 * shot = new balas3();
    shot->setPos(x(),y());
    scene()->addItem(shot);
}

