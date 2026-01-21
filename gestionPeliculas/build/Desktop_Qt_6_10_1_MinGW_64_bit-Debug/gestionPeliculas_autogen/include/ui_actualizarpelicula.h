/********************************************************************************
** Form generated from reading UI file 'actualizarpelicula.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTUALIZARPELICULA_H
#define UI_ACTUALIZARPELICULA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ActualizarPelicula
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtID;
    QPushButton *btnBuscar;
    QLineEdit *txtTitulo;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *txtDirector;
    QLabel *label_5;
    QSpinBox *spinAnio;
    QLabel *label_6;
    QLineEdit *txtGenero;
    QPushButton *btnActualizar;

    void setupUi(QDialog *ActualizarPelicula)
    {
        if (ActualizarPelicula->objectName().isEmpty())
            ActualizarPelicula->setObjectName("ActualizarPelicula");
        ActualizarPelicula->resize(467, 373);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(16);
        ActualizarPelicula->setFont(font);
        label = new QLabel(ActualizarPelicula);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 20, 311, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(28);
        label->setFont(font1);
        label_2 = new QLabel(ActualizarPelicula);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 80, 51, 21));
        label_2->setFont(font);
        txtID = new QLineEdit(ActualizarPelicula);
        txtID->setObjectName("txtID");
        txtID->setGeometry(QRect(90, 80, 231, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(11);
        txtID->setFont(font2);
        btnBuscar = new QPushButton(ActualizarPelicula);
        btnBuscar->setObjectName("btnBuscar");
        btnBuscar->setGeometry(QRect(150, 110, 75, 24));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(12);
        btnBuscar->setFont(font3);
        txtTitulo = new QLineEdit(ActualizarPelicula);
        txtTitulo->setObjectName("txtTitulo");
        txtTitulo->setGeometry(QRect(140, 140, 191, 31));
        txtTitulo->setFont(font3);
        label_3 = new QLabel(ActualizarPelicula);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 140, 91, 21));
        label_3->setFont(font);
        label_4 = new QLabel(ActualizarPelicula);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 180, 91, 21));
        label_4->setFont(font);
        txtDirector = new QLineEdit(ActualizarPelicula);
        txtDirector->setObjectName("txtDirector");
        txtDirector->setGeometry(QRect(140, 180, 191, 31));
        txtDirector->setFont(font3);
        label_5 = new QLabel(ActualizarPelicula);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 220, 91, 21));
        spinAnio = new QSpinBox(ActualizarPelicula);
        spinAnio->setObjectName("spinAnio");
        spinAnio->setGeometry(QRect(140, 220, 101, 21));
        label_6 = new QLabel(ActualizarPelicula);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 260, 91, 21));
        txtGenero = new QLineEdit(ActualizarPelicula);
        txtGenero->setObjectName("txtGenero");
        txtGenero->setGeometry(QRect(140, 250, 191, 31));
        txtGenero->setFont(font3);
        btnActualizar = new QPushButton(ActualizarPelicula);
        btnActualizar->setObjectName("btnActualizar");
        btnActualizar->setGeometry(QRect(160, 310, 101, 31));

        retranslateUi(ActualizarPelicula);

        QMetaObject::connectSlotsByName(ActualizarPelicula);
    } // setupUi

    void retranslateUi(QDialog *ActualizarPelicula)
    {
        ActualizarPelicula->setWindowTitle(QCoreApplication::translate("ActualizarPelicula", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ActualizarPelicula", "Actualizar Peliculas ", nullptr));
        label_2->setText(QCoreApplication::translate("ActualizarPelicula", "ID: ", nullptr));
        txtID->setPlaceholderText(QCoreApplication::translate("ActualizarPelicula", "Ingrese el ID de la pelicula a buscar", nullptr));
        btnBuscar->setText(QCoreApplication::translate("ActualizarPelicula", "Buscar", nullptr));
        txtTitulo->setPlaceholderText(QCoreApplication::translate("ActualizarPelicula", "Ingrese el nuevo nombre", nullptr));
        label_3->setText(QCoreApplication::translate("ActualizarPelicula", "Titulo: ", nullptr));
        label_4->setText(QCoreApplication::translate("ActualizarPelicula", "Director: ", nullptr));
        txtDirector->setPlaceholderText(QCoreApplication::translate("ActualizarPelicula", "Ingrese el nuevo diretor", nullptr));
        label_5->setText(QCoreApplication::translate("ActualizarPelicula", "A\303\261o: ", nullptr));
        label_6->setText(QCoreApplication::translate("ActualizarPelicula", "Genero: ", nullptr));
        txtGenero->setPlaceholderText(QCoreApplication::translate("ActualizarPelicula", "Ingrese el nuevo genero", nullptr));
        btnActualizar->setText(QCoreApplication::translate("ActualizarPelicula", "Actualizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ActualizarPelicula: public Ui_ActualizarPelicula {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTUALIZARPELICULA_H
