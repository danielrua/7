 #ifndef PERSONAJES_H
#define PERSONAJES_H
#include <QGraphicsItem>
#include <QGraphicsRotation>
#include <QPainter>
#include <QPixmap>


class personajes: public QGraphicsItem, QGraphicsRotation
{
    int radio;
    int posy;
    int posx;
    int velocidad=5;
public:
    personajes();
    personajes(int x, int y, int r);
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    void MoveUp();
    void MoveDown();
    void MoveRight();
    void MoveLeft();
    void Disparar();
    int GetX();
    int GetY();
};

#endif // PERSONAJES_H
