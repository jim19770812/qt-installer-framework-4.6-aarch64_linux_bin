/********************************************************************************
** Form generated from reading UI file 'serverauthenticationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERAUTHENTICATIONDIALOG_H
#define UI_SERVERAUTHENTICATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

namespace QInstaller {

class Ui_ServerAuthenticationDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *userEdit;
    QLabel *label_3;
    QLineEdit *passwordEdit;
    QDialogButtonBox *buttonBox;
    QLabel *label_4;
    QLabel *siteDescription;
    QSpacerItem *spacerItem;

    void setupUi(QDialog *QInstaller__ServerAuthenticationDialog)
    {
        if (QInstaller__ServerAuthenticationDialog->objectName().isEmpty())
            QInstaller__ServerAuthenticationDialog->setObjectName(QString::fromUtf8("QInstaller__ServerAuthenticationDialog"));
        QInstaller__ServerAuthenticationDialog->resize(330, 137);
        gridLayout = new QGridLayout(QInstaller__ServerAuthenticationDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(QInstaller__ServerAuthenticationDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(false);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(QInstaller__ServerAuthenticationDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        userEdit = new QLineEdit(QInstaller__ServerAuthenticationDialog);
        userEdit->setObjectName(QString::fromUtf8("userEdit"));

        gridLayout->addWidget(userEdit, 2, 1, 1, 1);

        label_3 = new QLabel(QInstaller__ServerAuthenticationDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        passwordEdit = new QLineEdit(QInstaller__ServerAuthenticationDialog);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordEdit, 3, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QInstaller__ServerAuthenticationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 2);

        label_4 = new QLabel(QInstaller__ServerAuthenticationDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        siteDescription = new QLabel(QInstaller__ServerAuthenticationDialog);
        siteDescription->setObjectName(QString::fromUtf8("siteDescription"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        siteDescription->setFont(font);
        siteDescription->setWordWrap(true);

        gridLayout->addWidget(siteDescription, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 4, 0, 1, 1);


        retranslateUi(QInstaller__ServerAuthenticationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QInstaller__ServerAuthenticationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QInstaller__ServerAuthenticationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QInstaller__ServerAuthenticationDialog);
    } // setupUi

    void retranslateUi(QDialog *QInstaller__ServerAuthenticationDialog)
    {
        QInstaller__ServerAuthenticationDialog->setWindowTitle(QCoreApplication::translate("QInstaller::ServerAuthenticationDialog", "Server Requires Authentication", nullptr));
        label->setText(QCoreApplication::translate("QInstaller::ServerAuthenticationDialog", "You need to supply a username and password to access this site.", nullptr));
        label_2->setText(QCoreApplication::translate("QInstaller::ServerAuthenticationDialog", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("QInstaller::ServerAuthenticationDialog", "Password:", nullptr));
        label_4->setText(QString());
        siteDescription->setText(QCoreApplication::translate("QInstaller::ServerAuthenticationDialog", "%1 at %2", nullptr));
    } // retranslateUi

};

} // namespace QInstaller

namespace QInstaller {
namespace Ui {
    class ServerAuthenticationDialog: public Ui_ServerAuthenticationDialog {};
} // namespace Ui
} // namespace QInstaller

#endif // UI_SERVERAUTHENTICATIONDIALOG_H
