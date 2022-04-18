#include "personajes.h"
#include "balas.h"
#include <QGraphicsScene>

personajes::personajes()
{

}

personajes::personajes(int posx, int posy, int r)
{
    this->posx=posx;
    this->posy=posy;
    this->radio=r;
    setPos(posx,posy);
}

QRectF personajes::boundingRect() const
{
    return QRectF(0,0,2*radio,2*radio);
}

void personajes::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pxmap(":/new/files/FINALP/NAVES.png");
    painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());
}

void personajes::MoveUp()
{
    posy=posy-velocidad;
    setPos(posx,posy);
}
void personajes::MoveDown()
{
    posy=posy+velocidad;
    setPos(posx,posy);
}

void personajes::MoveRight()
{
    posx=posx+velocidad;
    setPos(posx,posy);
}

void personajes::MoveLeft()
{
    posx=posx-velocidad;
    setPos(posx,posy);
}

void personajes::Disparar()
{
    balas * Bala = new balas();
    Bala->setPos(GetX(),GetY());
    scene()->addItem(Bala);
}

int personajes::GetX()
{
    return posx;
}

int personajes::GetY()
{
    return posy;
}
