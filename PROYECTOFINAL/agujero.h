#ifndef AGUJERO_H
#define AGUJERO_H
#include <QGraphicsItem>
#include <QPainter>
#include <QObject>


class agujero: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    agujero();
public slots:
void mover();
};

#endif // AGUJERO_H
