#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>
class score: public QGraphicsTextItem
{
public:
    score();
    void increase();
    int ActScore();
private:
    int Score;
};

#endif // SCORE_H
