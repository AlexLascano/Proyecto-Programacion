#include "verpeliculas.h"
#include "ui_verpeliculas.h"

#include <QFile>
#include <QTextStream>

VerPeliculas::VerPeliculas(QWidget *parent)
    : QDialog(parent), ui(new Ui::VerPeliculas)
{
    ui->setupUi(this);
    cargar();
}

VerPeliculas::~VerPeliculas()
{
    delete ui;
}

void VerPeliculas::cargar()
{
    QFile archivo("peliculas.txt");
    archivo.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&archivo);
    while (!in.atEnd()) {
        QStringList d = in.readLine().split(";");
        ui->listWidget->addItem(
            "ID: " + d[0] + " | " + d[1] + " | " + d[2] +
            " | " + d[3] + " | " + d[4]
            );
    }
    archivo.close();
}
