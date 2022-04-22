#ifndef OBSTACULOS_H
#define OBSTACULOS_H
#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>

class obstaculos : public QGraphicsItem
{
    //atributos
    int x;
    int y;
    int w;
    int h;

public:

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = nullptr);
    obstaculos();
    obstaculos(int x, int y, int w, int h);
};
#endif // OBSTACULOS_H
