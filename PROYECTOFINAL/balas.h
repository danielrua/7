#ifndef BALAS_H
#define BALAS_H
#include <QGraphicsPixmapItem>
#include <QObject>


class balas: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    balas();

public slots:
    void move();
    int acelerar(int cont=0);
};

#endif // BALAS_H
