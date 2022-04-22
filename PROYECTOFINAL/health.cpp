#include "health.h"
#include "qfont.h"

Health::Health()
{
    health = 3;
    setPlainText(QString("Energia: ")+QString::number(health));
    setDefaultTextColor(Qt::green);
    setFont(QFont("times",16));
    setPos(300,330);

}

void Health::decrease()
{
 health--;
 setPlainText(QString("Energia: ")+QString::number(health));
}

int Health::GetHealth()
{
 return health;
}

