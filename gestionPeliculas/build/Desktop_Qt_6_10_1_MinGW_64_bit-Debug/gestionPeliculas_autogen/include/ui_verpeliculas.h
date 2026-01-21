/********************************************************************************
** Form generated from reading UI file 'verpeliculas.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERPELICULAS_H
#define UI_VERPELICULAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_VerPeliculas
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *opcional2;

    void setupUi(QDialog *VerPeliculas)
    {
        if (VerPeliculas->objectName().isEmpty())
            VerPeliculas->setObjectName("VerPeliculas");
        VerPeliculas->resize(418, 427);
        label = new QLabel(VerPeliculas);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 311, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(28);
        label->setFont(font);
        listWidget = new QListWidget(VerPeliculas);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(70, 90, 301, 251));
        opcional2 = new QPushButton(VerPeliculas);
        opcional2->setObjectName("opcional2");
        opcional2->setGeometry(QRect(180, 370, 75, 24));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(12);
        opcional2->setFont(font1);

        retranslateUi(VerPeliculas);

        QMetaObject::connectSlotsByName(VerPeliculas);
    } // setupUi

    void retranslateUi(QDialog *VerPeliculas)
    {
        VerPeliculas->setWindowTitle(QCoreApplication::translate("VerPeliculas", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("VerPeliculas", "Peliculas Registradas", nullptr));
        opcional2->setText(QCoreApplication::translate("VerPeliculas", "Cerrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VerPeliculas: public Ui_VerPeliculas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERPELICULAS_H
