/********************************************************************************
** Form generated from reading UI file 'proxycredentialsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROXYCREDENTIALSDIALOG_H
#define UI_PROXYCREDENTIALSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

namespace QInstaller {

class Ui_ProxyCredentialsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *infotext;
    QFormLayout *formLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QInstaller__ProxyCredentialsDialog)
    {
        if (QInstaller__ProxyCredentialsDialog->objectName().isEmpty())
            QInstaller__ProxyCredentialsDialog->setObjectName(QString::fromUtf8("QInstaller__ProxyCredentialsDialog"));
        QInstaller__ProxyCredentialsDialog->resize(262, 114);
        verticalLayout = new QVBoxLayout(QInstaller__ProxyCredentialsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        infotext = new QLabel(QInstaller__ProxyCredentialsDialog);
        infotext->setObjectName(QString::fromUtf8("infotext"));

        verticalLayout->addWidget(infotext);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        usernameLabel = new QLabel(QInstaller__ProxyCredentialsDialog);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, usernameLabel);

        usernameLineEdit = new QLineEdit(QInstaller__ProxyCredentialsDialog);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, usernameLineEdit);

        passwordLabel = new QLabel(QInstaller__ProxyCredentialsDialog);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        passwordLineEdit = new QLineEdit(QInstaller__ProxyCredentialsDialog);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordLineEdit);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(QInstaller__ProxyCredentialsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QInstaller__ProxyCredentialsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QInstaller__ProxyCredentialsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QInstaller__ProxyCredentialsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QInstaller__ProxyCredentialsDialog);
    } // setupUi

    void retranslateUi(QDialog *QInstaller__ProxyCredentialsDialog)
    {
        QInstaller__ProxyCredentialsDialog->setWindowTitle(QCoreApplication::translate("QInstaller::ProxyCredentialsDialog", "Dialog", nullptr));
        infotext->setText(QCoreApplication::translate("QInstaller::ProxyCredentialsDialog", "The proxy %1 requires a username and password.", nullptr));
        usernameLabel->setText(QCoreApplication::translate("QInstaller::ProxyCredentialsDialog", "Username:", nullptr));
        usernameLineEdit->setPlaceholderText(QCoreApplication::translate("QInstaller::ProxyCredentialsDialog", "Username", nullptr));
        passwordLabel->setText(QCoreApplication::translate("QInstaller::ProxyCredentialsDialog", "Password:", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("QInstaller::ProxyCredentialsDialog", "Password", nullptr));
    } // retranslateUi

};

} // namespace QInstaller

namespace QInstaller {
namespace Ui {
    class ProxyCredentialsDialog: public Ui_ProxyCredentialsDialog {};
} // namespace Ui
} // namespace QInstaller

#endif // UI_PROXYCREDENTIALSDIALOG_H
