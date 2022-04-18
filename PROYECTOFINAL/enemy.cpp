#include "enemy.h"
#include <QTimer>
#include <QGraphicsScene>
enemy::enemy()
{

}

enemy::enemy(int posx, int posy, int r)
{
    this->posx=posx;
    this->posy=posy;
    this->radio=r;
    setPos(posx,posy);
}

QRectF enemy::boundingRect() const
{
    return QRectF(0,0,2*radio,2*radio);
}

void enemy::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pxmap(":/new/files/FINALP/ENAVE.png");
    painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());

}
