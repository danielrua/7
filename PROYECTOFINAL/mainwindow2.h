#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H
#include <QMainWindow>
#include <personajes.h>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <enemy.h>

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = nullptr);
    ~MainWindow2();

private:
    void keyPressEvent(QKeyEvent *event);
    Ui::MainWindow2 *ui;
    personajes *nave;
    enemy *enemigos;
    enemy *enemigo2;
    QGraphicsScene *scene;
};

#endif // MAINWINDOW2_H
