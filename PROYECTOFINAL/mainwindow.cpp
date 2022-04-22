#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow2.h"
#include <QPixmap>
#include <iostream>
#include <string>
#include <fstream>
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    QPixmap pix(":/new/files/FINALP/fondoc.png");
    ui->fondo->setPixmap(pix.scaled(300,300,Qt::KeepAspectRatio));
    connect(ui->StartButton,SIGNAL(clicked()),this,SLOT(abrirJuego()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::abrirJuego()
{
   MainWindow::hide();
   GameScreen = new MainWindow2(this);
   GameScreen->show();
   const QString qString = ui->UserBox->text();
     const QString qPath("./usuarios.txt");
     QFile qFile(qPath);
     if (qFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
       QTextStream out(&qFile); out << qString<<"\n";
       qFile.close();
     }

}

