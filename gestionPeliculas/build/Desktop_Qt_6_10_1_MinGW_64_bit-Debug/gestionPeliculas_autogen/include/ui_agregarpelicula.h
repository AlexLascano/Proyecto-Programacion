/********************************************************************************
** Form generated from reading UI file 'agregarpelicula.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGARPELICULA_H
#define UI_AGREGARPELICULA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AgregarPelicula
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *lblMostrarID;
    QLineEdit *txtTitulo;
    QLabel *label_3;
    QLineEdit *txtDirector;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *spinAnio;
    QLabel *label_6;
    QLineEdit *txtGenero;
    QPushButton *btnGuardar;
    QPushButton *opcional;

    void setupUi(QDialog *AgregarPelicula)
    {
        if (AgregarPelicula->objectName().isEmpty())
            AgregarPelicula->setObjectName("AgregarPelicula");
        AgregarPelicula->resize(478, 426);
        label = new QLabel(AgregarPelicula);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 30, 261, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(28);
        label->setFont(font);
        label_2 = new QLabel(AgregarPelicula);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 100, 49, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(16);
        label_2->setFont(font1);
        lblMostrarID = new QLabel(AgregarPelicula);
        lblMostrarID->setObjectName("lblMostrarID");
        lblMostrarID->setGeometry(QRect(100, 100, 101, 21));
        lblMostrarID->setFont(font1);
        txtTitulo = new QLineEdit(AgregarPelicula);
        txtTitulo->setObjectName("txtTitulo");
        txtTitulo->setGeometry(QRect(140, 130, 181, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(12);
        txtTitulo->setFont(font2);
        label_3 = new QLabel(AgregarPelicula);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 130, 71, 21));
        label_3->setFont(font1);
        txtDirector = new QLineEdit(AgregarPelicula);
        txtDirector->setObjectName("txtDirector");
        txtDirector->setGeometry(QRect(140, 170, 201, 31));
        txtDirector->setFont(font2);
        label_4 = new QLabel(AgregarPelicula);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 180, 81, 16));
        label_4->setFont(font1);
        label_5 = new QLabel(AgregarPelicula);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 220, 81, 16));
        label_5->setFont(font1);
        spinAnio = new QSpinBox(AgregarPelicula);
        spinAnio->setObjectName("spinAnio");
        spinAnio->setGeometry(QRect(140, 220, 101, 21));
        label_6 = new QLabel(AgregarPelicula);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 260, 81, 16));
        label_6->setFont(font1);
        txtGenero = new QLineEdit(AgregarPelicula);
        txtGenero->setObjectName("txtGenero");
        txtGenero->setGeometry(QRect(140, 260, 201, 22));
        txtGenero->setFont(font2);
        btnGuardar = new QPushButton(AgregarPelicula);
        btnGuardar->setObjectName("btnGuardar");
        btnGuardar->setGeometry(QRect(80, 330, 75, 24));
        btnGuardar->setFont(font2);
        opcional = new QPushButton(AgregarPelicula);
        opcional->setObjectName("opcional");
        opcional->setGeometry(QRect(290, 330, 75, 24));
        opcional->setFont(font2);

        retranslateUi(AgregarPelicula);

        QMetaObject::connectSlotsByName(AgregarPelicula);
    } // setupUi

    void retranslateUi(QDialog *AgregarPelicula)
    {
        AgregarPelicula->setWindowTitle(QCoreApplication::translate("AgregarPelicula", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AgregarPelicula", "Agregar Pelicula", nullptr));
        label_2->setText(QCoreApplication::translate("AgregarPelicula", "ID:", nullptr));
        lblMostrarID->setText(QCoreApplication::translate("AgregarPelicula", ".", nullptr));
        txtTitulo->setPlaceholderText(QCoreApplication::translate("AgregarPelicula", "Ingrese el titulo de la pelicula", nullptr));
        label_3->setText(QCoreApplication::translate("AgregarPelicula", "Titulo:", nullptr));
        txtDirector->setPlaceholderText(QCoreApplication::translate("AgregarPelicula", "Ingrese el director de la pelicula", nullptr));
        label_4->setText(QCoreApplication::translate("AgregarPelicula", "Director:", nullptr));
        label_5->setText(QCoreApplication::translate("AgregarPelicula", "A\303\261o:", nullptr));
        label_6->setText(QCoreApplication::translate("AgregarPelicula", "Genero:", nullptr));
        txtGenero->setPlaceholderText(QCoreApplication::translate("AgregarPelicula", "Ingrese el genero de la pelicula", nullptr));
        btnGuardar->setText(QCoreApplication::translate("AgregarPelicula", "Guardar", nullptr));
        opcional->setText(QCoreApplication::translate("AgregarPelicula", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AgregarPelicula: public Ui_AgregarPelicula {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARPELICULA_H
