#include "agregarpelicula.h"
#include "ui_agregarpelicula.h"

#include <QFile>
#include <QTextStream>
#include <QMessageBox>

AgregarPelicula::AgregarPelicula(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::AgregarPelicula)
{
    ui->setupUi(this);
}

AgregarPelicula::~AgregarPelicula()
{
    delete ui;
}

int AgregarPelicula::generarId()
{
    QFile archivo("peliculas.txt");
    int id = 1;

    if (archivo.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&archivo);
        while (!in.atEnd()) {
            QString linea = in.readLine();
            QStringList d = linea.split(";");
            if (!d.isEmpty())
                id = d[0].toInt() + 1;
        }
        archivo.close();
    }
    return id;
}

void AgregarPelicula::on_pushButton_clicked()
{
    QFile archivo("peliculas.txt");

    if (!archivo.open(QIODevice::Append | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo");
        return;
    }

    int id = generarId();
    QTextStream out(&archivo);

    out << id << ";"
        << ui->txtTitulo->text() << ";"
        << ui->txtDirector->text() << ";"
        << ui->spinAnio->value() << ";"
        << ui->txtGenero->text() << "\n";

    archivo.close();

    QMessageBox::information(
        this,
        "Correcto",
        "Película agregada\nID: " + QString::number(id)
        );

    close();
}
