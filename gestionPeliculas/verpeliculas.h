#ifndef VERPELICULAS_H
#define VERPELICULAS_H

#include <QDialog>

namespace Ui {
class VerPeliculas;
}

class VerPeliculas : public QDialog
{
    Q_OBJECT

public:
    explicit VerPeliculas(QWidget *parent = nullptr);
    ~VerPeliculas();

private:
    Ui::VerPeliculas *ui;
    void cargar();
};

#endif // VERPELICULAS_H
