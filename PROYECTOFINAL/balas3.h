#ifndef BALAS3_H
#define BALAS3_H
#include <QGraphicsRectItem>
#include <QObject>

class balas3: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    balas3();

public slots:
    void move();
};

#endif // BALAS3_H
