/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *protocolEdit;
    QLineEdit *ipEdit;
    QSpinBox *spinBox;
    QLineEdit *userNameEdit;
    QLineEdit *passwordEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(226, 178);
        gridLayout_2 = new QGridLayout(Settings);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(Settings);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(Settings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(Settings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(Settings);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_4 = new QLabel(Settings);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        protocolEdit = new QLineEdit(Settings);
        protocolEdit->setObjectName(QString::fromUtf8("protocolEdit"));

        gridLayout->addWidget(protocolEdit, 0, 1, 1, 1);

        ipEdit = new QLineEdit(Settings);
        ipEdit->setObjectName(QString::fromUtf8("ipEdit"));

        gridLayout->addWidget(ipEdit, 1, 1, 1, 1);

        spinBox = new QSpinBox(Settings);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout->addWidget(spinBox, 2, 1, 1, 1);

        userNameEdit = new QLineEdit(Settings);
        userNameEdit->setObjectName(QString::fromUtf8("userNameEdit"));

        gridLayout->addWidget(userNameEdit, 3, 1, 1, 1);

        passwordEdit = new QLineEdit(Settings);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setInputMethodHints(Qt::ImhHiddenText);

        gridLayout->addWidget(passwordEdit, 4, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Settings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(Settings);
        QObject::connect(buttonBox, SIGNAL(accepted()), Settings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Settings, SLOT(reject()));

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Settings", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("Settings", "\345\215\217\350\256\256\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Settings", "\344\270\273\346\234\272\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Settings", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Settings", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
#if QT_CONFIG(statustip)
        passwordEdit->setStatusTip(QCoreApplication::translate("Settings", "password", nullptr));
#endif // QT_CONFIG(statustip)
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
