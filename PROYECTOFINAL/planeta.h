#ifndef PLANETA_H
#define PLANETA_H
#include <QGraphicsItem>
#include <QPainter>
#include <QObject>

class planeta: public QObject, public QGraphicsPixmapItem
{
public:
    planeta();
};

#endif // PLANETA_H
