/********************************************************************************
** Form generated from reading UI file 'eliminarpelicula.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINARPELICULA_H
#define UI_ELIMINARPELICULA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EliminarPelicula
{
public:
    QLabel *label;
    QLineEdit *txtID;
    QLabel *label_2;
    QPushButton *btnEliminar;

    void setupUi(QDialog *EliminarPelicula)
    {
        if (EliminarPelicula->objectName().isEmpty())
            EliminarPelicula->setObjectName("EliminarPelicula");
        EliminarPelicula->resize(471, 363);
        label = new QLabel(EliminarPelicula);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 20, 261, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(28);
        label->setFont(font);
        txtID = new QLineEdit(EliminarPelicula);
        txtID->setObjectName("txtID");
        txtID->setGeometry(QRect(120, 90, 261, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(12);
        txtID->setFont(font1);
        label_2 = new QLabel(EliminarPelicula);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 100, 49, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(16);
        label_2->setFont(font2);
        btnEliminar = new QPushButton(EliminarPelicula);
        btnEliminar->setObjectName("btnEliminar");
        btnEliminar->setGeometry(QRect(180, 150, 111, 41));
        btnEliminar->setFont(font2);

        retranslateUi(EliminarPelicula);

        QMetaObject::connectSlotsByName(EliminarPelicula);
    } // setupUi

    void retranslateUi(QDialog *EliminarPelicula)
    {
        EliminarPelicula->setWindowTitle(QCoreApplication::translate("EliminarPelicula", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EliminarPelicula", "Eliminar Pelicula", nullptr));
        txtID->setPlaceholderText(QCoreApplication::translate("EliminarPelicula", "Ingrese el ID de la pelicula a eliminar", nullptr));
        label_2->setText(QCoreApplication::translate("EliminarPelicula", "ID: ", nullptr));
        btnEliminar->setText(QCoreApplication::translate("EliminarPelicula", "Eliminar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EliminarPelicula: public Ui_EliminarPelicula {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINARPELICULA_H
