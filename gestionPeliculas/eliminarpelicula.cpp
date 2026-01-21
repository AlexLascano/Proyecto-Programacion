#include "eliminarpelicula.h"
#include "ui_eliminarpelicula.h"

#include <QFile>
#include <QTextStream>
#include <QMessageBox>

EliminarPelicula::EliminarPelicula(QWidget *parent)
    : QDialog(parent), ui(new Ui::EliminarPelicula)
{
    ui->setupUi(this);
}

EliminarPelicula::~EliminarPelicula()
{
    delete ui;
}

void EliminarPelicula::on_btnEliminar_clicked()
{
    QFile archivo("peliculas.txt");
    QFile temp("temp.txt");

    archivo.open(QIODevice::ReadOnly | QIODevice::Text);
    temp.open(QIODevice::WriteOnly | QIODevice::Text);

    QTextStream in(&archivo);
    QTextStream out(&temp);
    int id = ui->txtID->text().toInt();

    while (!in.atEnd()) {
        QString linea = in.readLine();
        QStringList d = linea.split(";");

        if (d[0].toInt() != id)
            out << linea << "\n";
    }

    archivo.close();
    temp.close();
    archivo.remove();
    temp.rename("peliculas.txt");

    QMessageBox::information(this, "OK", "Película eliminada");
    close();
}
