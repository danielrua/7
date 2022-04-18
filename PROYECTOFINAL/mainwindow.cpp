#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow2.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    connect(ui->StartButton,SIGNAL(clicked()),this,SLOT(abrirJuego()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::abrirJuego()
{

   GameScreen = new MainWindow2(this);
   GameScreen->show();
}

