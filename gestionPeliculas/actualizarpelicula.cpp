#include "actualizarpelicula.h"
#include "ui_actualizarpelicula.h"

#include <QFile>
#include <QTextStream>
#include <QMessageBox>

ActualizarPelicula::ActualizarPelicula(QWidget *parent)
    : QDialog(parent), ui(new Ui::ActualizarPelicula)
{
    ui->setupUi(this);
}

ActualizarPelicula::~ActualizarPelicula()
{
    delete ui;
}

void ActualizarPelicula::on_btnBuscar_clicked()
{
    QFile archivo("peliculas.txt");
    archivo.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&archivo);
    int id = ui->txtID->text().toInt();

    while (!in.atEnd()) {
        QStringList d = in.readLine().split(";");
        if (d[0].toInt() == id) {
            ui->txtTitulo->setText(d[1]);
            ui->txtDirector->setText(d[2]);
            ui->spinAnio->setValue(d[3].toInt());
            ui->txtGenero->setText(d[4]);
            break;
        }
    }
    archivo.close();
}

void ActualizarPelicula::on_btnActualizar_clicked()
{
    QFile archivo("peliculas.txt");
    QFile temp("temp.txt");

    archivo.open(QIODevice::ReadOnly | QIODevice::Text);
    temp.open(QIODevice::WriteOnly | QIODevice::Text);

    QTextStream in(&archivo);
    QTextStream out(&temp);
    int id = ui->txtID->text().toInt();

    while (!in.atEnd()) {
        QStringList d = in.readLine().split(";");
        if (d[0].toInt() == id) {
            out << id << ";"
                << ui->txtTitulo->text() << ";"
                << ui->txtDirector->text() << ";"
                << ui->spinAnio->value() << ";"
                << ui->txtGenero->text() << "\n";
        } else {
            out << d.join(";") << "\n";
        }
    }

    archivo.close();
    temp.close();
    archivo.remove();
    temp.rename("peliculas.txt");

    QMessageBox::information(this, "OK", "Película actualizada");
    close();
}
