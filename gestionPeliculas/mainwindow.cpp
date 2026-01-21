#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "agregarpelicula.h"
#include "verpeliculas.h"
#include "actualizarpelicula.h"
#include "eliminarpelicula.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    AgregarPelicula ventana;
    ventana.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    VerPeliculas ventana;
    ventana.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    ActualizarPelicula ventana;
    ventana.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    EliminarPelicula ventana;
    ventana.exec();
}

