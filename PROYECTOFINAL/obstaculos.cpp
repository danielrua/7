#include <obstaculos.h>

QRectF obstaculos::boundingRect() const
{
    return QRectF(x,y,w,h);
}

void obstaculos::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::gray);
    painter->drawRect(boundingRect());
}

obstaculos::obstaculos()
{

}

obstaculos::obstaculos(int x, int y, int w, int h)
{
    this->x=x;
    this->y=y;
    this->w=w;
    this->h=h;
}
