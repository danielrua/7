#ifndef ENEMY_H
#define ENEMY_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>
#include <QPainter>

class enemy:public QGraphicsItem
{
    int radio;
    int posy;
    int posx;

public:
    enemy();
    enemy(int x, int y, int r);
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
public slots:

};

#endif // ENEMY_H
