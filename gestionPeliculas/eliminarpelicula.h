#ifndef ELIMINARPELICULA_H
#define ELIMINARPELICULA_H

#include <QDialog>

namespace Ui {
class EliminarPelicula;
}

class EliminarPelicula : public QDialog
{
    Q_OBJECT

public:
    explicit EliminarPelicula(QWidget *parent = nullptr);
    ~EliminarPelicula();

private slots:
    void on_btnEliminar_clicked();

private:
    Ui::EliminarPelicula *ui;
};

#endif // ELIMINARPELICULA_H
