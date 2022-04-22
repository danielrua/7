#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H
#include <QMainWindow>
#include <personajes.h>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <enemy.h>
#include<obstaculos.h>
#include <score.h>
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
    Ui::MainWindow2 *ui;
    personajes *nave;
    int count=60;
    int count2=60;
    QList<obstaculos*>rocas;
    enemy *enemigos;
    enemy *enemigo2;
    QGraphicsScene *scene;
};

#endif // MAINWINDOW2_H
