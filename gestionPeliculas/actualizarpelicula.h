#ifndef ACTUALIZARPELICULA_H
#define ACTUALIZARPELICULA_H


#include <QDialog>

namespace Ui {
class ActualizarPelicula;
}

class ActualizarPelicula : public QDialog
{
    Q_OBJECT

public:
    explicit ActualizarPelicula(QWidget *parent = nullptr);
    ~ActualizarPelicula();

private slots:
    void on_btnBuscar_clicked();
    void on_btnActualizar_clicked();

private:
    Ui::ActualizarPelicula *ui;
};

#endif // ACTUALIZARPELICULA_H
