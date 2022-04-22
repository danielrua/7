#ifndef ENEMY_H
#define ENEMY_H
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QPainter>
#include <QObject>


class enemy: public QObject, public QGraphicsRectItem
{
    Q_OBJECT

public:
    enemy();
public slots:
void mover();
void shot();
void shot2();
};

#endif // ENEMY_H
