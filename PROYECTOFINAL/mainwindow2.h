#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H
#include <QMainWindow>
#include <personajes.h>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <enemy.h>
#include<obstaculos.h>
#include <score.h>
#include <agujero.h>
#include <planeta.h>
namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = nullptr);
    ~MainWindow2();
    score *Score;
private slots:
    void Actualizar();
private:
    void keyPressEvent(QKeyEvent *event);
    void spawn();
    QTimer *timer;
    QTimer *timer1;
    Ui::MainWindow2 *ui;
    personajes *nave,enave2,enave;
    agujero *hole,*hole2;
    planeta *marte;
    int count=60;
    int count2=60;
    void GameOver(QString textToDisplay);
    void drawPanel(int x, int y, int width, int height, QColor color, double opacity);
    QList<obstaculos*>rocas;
    enemy *enemigos,enemigo2;
    QGraphicsScene *scene;
};

#endif // MAINWINDOW2_H
