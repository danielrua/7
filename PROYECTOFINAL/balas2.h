#ifndef BALAS2_H
#define BALAS2_H
#include <QGraphicsRectItem>
#include <QObject>

class balas2: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    balas2();

public slots:
    void move();
};

#endif // BALAS2_H
