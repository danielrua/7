#ifndef BALAS_H
#define BALAS_H
#include <QGraphicsRectItem>
#include <QObject>

class balas: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    balas();

public slots:
    void move();
};

#endif // BALAS_H
