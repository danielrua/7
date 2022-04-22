#include <score.h>
#include <Qfont.h>


score::score()
{
    Score = 0;
    setPlainText(QString("Score: ")+QString::number(Score));\
    setDefaultTextColor(Qt::black);
    setPos(695,0);
    setFont(QFont("times",16));

}

void score::increase()
{
 Score++;
 setPlainText(QString("Score2: ")+QString::number(Score));
}

int score::ActScore()
{
 return Score;
}
