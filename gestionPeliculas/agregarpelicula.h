#ifndef AGREGARPELICULA_H
#define AGREGARPELICULA_H

#include <QDialog>

namespace Ui {
class AgregarPelicula;
}

class AgregarPelicula : public QDialog
{
    Q_OBJECT

public:
    explicit AgregarPelicula(QWidget *parent = nullptr);
    ~AgregarPelicula();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AgregarPelicula *ui;
    int generarId();
};

#endif

