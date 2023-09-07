/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *m_network;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *m_noProxySettings;
    QRadioButton *m_systemProxySettings;
    QRadioButton *m_manualProxySettings;
    QWidget *m_rootWidget;
    QGridLayout *gridLayout_3;
    QLabel *m_httpProxyLabel;
    QLineEdit *m_httpProxy;
    QLabel *m_httpProxyPortLabel;
    QSpinBox *m_httpProxyPort;
    QWidget *m_httpAuthWidget;
    QGridLayout *gridLayout_2;
    QLabel *m_ftpProxyLabel;
    QLineEdit *m_ftpProxy;
    QLabel *m_ftpProxyPortLabel;
    QSpinBox *m_ftpProxyPort;
    QWidget *m_ftpAuthWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QWidget *m_repositories;
    QVBoxLayout *verticalLayout;
    QLabel *m_httpAuthLabel;
    QTreeWidget *m_repositoriesView;
    QCheckBox *m_useTmpRepositories;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_addRepository;
    QPushButton *m_removeRepository;
    QPushButton *m_testRepository;
    QPushButton *m_selectAll;
    QPushButton *m_deselectAll;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_showPasswords;
    QWidget *m_localCache;
    QVBoxLayout *verticalLayout_5;
    QLabel *m_cacheDescriptionLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *m_cachePathLabel;
    QLineEdit *m_cachePathLineEdit;
    QSpacerItem *verticalSpacer_3;
    QLabel *m_clearCacheProgressLabel;
    QProgressBar *m_clearCacheProgressBar;
    QSpacerItem *verticalSpacer;
    QPushButton *m_clearPushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(543, 443);
        verticalLayout_3 = new QVBoxLayout(SettingsDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        m_network = new QWidget();
        m_network->setObjectName(QString::fromUtf8("m_network"));
        verticalLayout_2 = new QVBoxLayout(m_network);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_noProxySettings = new QRadioButton(m_network);
        m_noProxySettings->setObjectName(QString::fromUtf8("m_noProxySettings"));
        m_noProxySettings->setChecked(true);

        verticalLayout_2->addWidget(m_noProxySettings);

        m_systemProxySettings = new QRadioButton(m_network);
        m_systemProxySettings->setObjectName(QString::fromUtf8("m_systemProxySettings"));
        m_systemProxySettings->setEnabled(true);
        m_systemProxySettings->setChecked(false);

        verticalLayout_2->addWidget(m_systemProxySettings);

        m_manualProxySettings = new QRadioButton(m_network);
        m_manualProxySettings->setObjectName(QString::fromUtf8("m_manualProxySettings"));

        verticalLayout_2->addWidget(m_manualProxySettings);

        m_rootWidget = new QWidget(m_network);
        m_rootWidget->setObjectName(QString::fromUtf8("m_rootWidget"));
        gridLayout_3 = new QGridLayout(m_rootWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        m_httpProxyLabel = new QLabel(m_rootWidget);
        m_httpProxyLabel->setObjectName(QString::fromUtf8("m_httpProxyLabel"));
        m_httpProxyLabel->setEnabled(false);

        gridLayout_3->addWidget(m_httpProxyLabel, 0, 0, 1, 1);

        m_httpProxy = new QLineEdit(m_rootWidget);
        m_httpProxy->setObjectName(QString::fromUtf8("m_httpProxy"));
        m_httpProxy->setEnabled(false);

        gridLayout_3->addWidget(m_httpProxy, 0, 1, 1, 1);

        m_httpProxyPortLabel = new QLabel(m_rootWidget);
        m_httpProxyPortLabel->setObjectName(QString::fromUtf8("m_httpProxyPortLabel"));
        m_httpProxyPortLabel->setEnabled(false);

        gridLayout_3->addWidget(m_httpProxyPortLabel, 0, 2, 1, 1);

        m_httpProxyPort = new QSpinBox(m_rootWidget);
        m_httpProxyPort->setObjectName(QString::fromUtf8("m_httpProxyPort"));
        m_httpProxyPort->setEnabled(false);
        m_httpProxyPort->setMaximum(65535);

        gridLayout_3->addWidget(m_httpProxyPort, 0, 3, 1, 1);

        m_httpAuthWidget = new QWidget(m_rootWidget);
        m_httpAuthWidget->setObjectName(QString::fromUtf8("m_httpAuthWidget"));
        m_httpAuthWidget->setEnabled(false);
        gridLayout_2 = new QGridLayout(m_httpAuthWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, 0, 0);

        gridLayout_3->addWidget(m_httpAuthWidget, 1, 0, 1, 1);

        m_ftpProxyLabel = new QLabel(m_rootWidget);
        m_ftpProxyLabel->setObjectName(QString::fromUtf8("m_ftpProxyLabel"));
        m_ftpProxyLabel->setEnabled(false);

        gridLayout_3->addWidget(m_ftpProxyLabel, 2, 0, 1, 1);

        m_ftpProxy = new QLineEdit(m_rootWidget);
        m_ftpProxy->setObjectName(QString::fromUtf8("m_ftpProxy"));
        m_ftpProxy->setEnabled(false);

        gridLayout_3->addWidget(m_ftpProxy, 2, 1, 1, 1);

        m_ftpProxyPortLabel = new QLabel(m_rootWidget);
        m_ftpProxyPortLabel->setObjectName(QString::fromUtf8("m_ftpProxyPortLabel"));
        m_ftpProxyPortLabel->setEnabled(false);

        gridLayout_3->addWidget(m_ftpProxyPortLabel, 2, 2, 1, 1);

        m_ftpProxyPort = new QSpinBox(m_rootWidget);
        m_ftpProxyPort->setObjectName(QString::fromUtf8("m_ftpProxyPort"));
        m_ftpProxyPort->setEnabled(false);
        m_ftpProxyPort->setMaximum(65535);

        gridLayout_3->addWidget(m_ftpProxyPort, 2, 3, 1, 1);

        m_ftpAuthWidget = new QWidget(m_rootWidget);
        m_ftpAuthWidget->setObjectName(QString::fromUtf8("m_ftpAuthWidget"));
        m_ftpAuthWidget->setEnabled(false);
        gridLayout = new QGridLayout(m_ftpAuthWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, 0, 0);

        gridLayout_3->addWidget(m_ftpAuthWidget, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 3, 2, 1, 1);


        verticalLayout_2->addWidget(m_rootWidget);

        tabWidget->addTab(m_network, QString());
        m_repositories = new QWidget();
        m_repositories->setObjectName(QString::fromUtf8("m_repositories"));
        verticalLayout = new QVBoxLayout(m_repositories);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_httpAuthLabel = new QLabel(m_repositories);
        m_httpAuthLabel->setObjectName(QString::fromUtf8("m_httpAuthLabel"));

        verticalLayout->addWidget(m_httpAuthLabel);

        m_repositoriesView = new QTreeWidget(m_repositories);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        m_repositoriesView->setHeaderItem(__qtreewidgetitem);
        m_repositoriesView->setObjectName(QString::fromUtf8("m_repositoriesView"));

        verticalLayout->addWidget(m_repositoriesView);

        m_useTmpRepositories = new QCheckBox(m_repositories);
        m_useTmpRepositories->setObjectName(QString::fromUtf8("m_useTmpRepositories"));

        verticalLayout->addWidget(m_useTmpRepositories);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_addRepository = new QPushButton(m_repositories);
        m_addRepository->setObjectName(QString::fromUtf8("m_addRepository"));

        horizontalLayout->addWidget(m_addRepository);

        m_removeRepository = new QPushButton(m_repositories);
        m_removeRepository->setObjectName(QString::fromUtf8("m_removeRepository"));

        horizontalLayout->addWidget(m_removeRepository);

        m_testRepository = new QPushButton(m_repositories);
        m_testRepository->setObjectName(QString::fromUtf8("m_testRepository"));

        horizontalLayout->addWidget(m_testRepository);

        m_selectAll = new QPushButton(m_repositories);
        m_selectAll->setObjectName(QString::fromUtf8("m_selectAll"));

        horizontalLayout->addWidget(m_selectAll);

        m_deselectAll = new QPushButton(m_repositories);
        m_deselectAll->setObjectName(QString::fromUtf8("m_deselectAll"));

        horizontalLayout->addWidget(m_deselectAll);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_showPasswords = new QPushButton(m_repositories);
        m_showPasswords->setObjectName(QString::fromUtf8("m_showPasswords"));

        horizontalLayout->addWidget(m_showPasswords);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget->addTab(m_repositories, QString());
        m_localCache = new QWidget();
        m_localCache->setObjectName(QString::fromUtf8("m_localCache"));
        verticalLayout_5 = new QVBoxLayout(m_localCache);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        m_cacheDescriptionLabel = new QLabel(m_localCache);
        m_cacheDescriptionLabel->setObjectName(QString::fromUtf8("m_cacheDescriptionLabel"));
        m_cacheDescriptionLabel->setWordWrap(true);

        verticalLayout_5->addWidget(m_cacheDescriptionLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        m_cachePathLabel = new QLabel(m_localCache);
        m_cachePathLabel->setObjectName(QString::fromUtf8("m_cachePathLabel"));

        horizontalLayout_2->addWidget(m_cachePathLabel);

        m_cachePathLineEdit = new QLineEdit(m_localCache);
        m_cachePathLineEdit->setObjectName(QString::fromUtf8("m_cachePathLineEdit"));

        horizontalLayout_2->addWidget(m_cachePathLineEdit);


        verticalLayout_5->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        m_clearCacheProgressLabel = new QLabel(m_localCache);
        m_clearCacheProgressLabel->setObjectName(QString::fromUtf8("m_clearCacheProgressLabel"));

        verticalLayout_5->addWidget(m_clearCacheProgressLabel);

        m_clearCacheProgressBar = new QProgressBar(m_localCache);
        m_clearCacheProgressBar->setObjectName(QString::fromUtf8("m_clearCacheProgressBar"));
        m_clearCacheProgressBar->setEnabled(true);
        m_clearCacheProgressBar->setMaximum(0);
        m_clearCacheProgressBar->setValue(-1);
        m_clearCacheProgressBar->setFormat(QString::fromUtf8("%p%"));

        verticalLayout_5->addWidget(m_clearCacheProgressBar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        m_clearPushButton = new QPushButton(m_localCache);
        m_clearPushButton->setObjectName(QString::fromUtf8("m_clearPushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_clearPushButton->sizePolicy().hasHeightForWidth());
        m_clearPushButton->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(m_clearPushButton);

        tabWidget->addTab(m_localCache, QString());

        verticalLayout_3->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));
        QObject::connect(m_manualProxySettings, SIGNAL(toggled(bool)), m_httpProxyLabel, SLOT(setEnabled(bool)));
        QObject::connect(m_manualProxySettings, SIGNAL(toggled(bool)), m_httpProxy, SLOT(setEnabled(bool)));
        QObject::connect(m_manualProxySettings, SIGNAL(toggled(bool)), m_httpProxyPort, SLOT(setEnabled(bool)));
        QObject::connect(m_manualProxySettings, SIGNAL(toggled(bool)), m_httpProxyPortLabel, SLOT(setEnabled(bool)));
        QObject::connect(m_manualProxySettings, SIGNAL(toggled(bool)), m_ftpProxyPortLabel, SLOT(setEnabled(bool)));
        QObject::connect(m_manualProxySettings, SIGNAL(toggled(bool)), m_ftpProxyLabel, SLOT(setEnabled(bool)));
        QObject::connect(m_manualProxySettings, SIGNAL(toggled(bool)), m_ftpProxy, SLOT(setEnabled(bool)));
        QObject::connect(m_manualProxySettings, SIGNAL(toggled(bool)), m_ftpProxyPort, SLOT(setEnabled(bool)));
        QObject::connect(m_manualProxySettings, SIGNAL(toggled(bool)), m_httpAuthWidget, SLOT(setEnabled(bool)));
        QObject::connect(m_manualProxySettings, SIGNAL(toggled(bool)), m_ftpAuthWidget, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Settings", nullptr));
        m_noProxySettings->setText(QCoreApplication::translate("SettingsDialog", "No proxy", nullptr));
        m_systemProxySettings->setText(QCoreApplication::translate("SettingsDialog", "System proxy settings", nullptr));
        m_manualProxySettings->setText(QCoreApplication::translate("SettingsDialog", "Manual proxy configuration", nullptr));
        m_httpProxyLabel->setText(QCoreApplication::translate("SettingsDialog", "HTTP proxy:", nullptr));
        m_httpProxyPortLabel->setText(QCoreApplication::translate("SettingsDialog", "Port:", nullptr));
        m_ftpProxyLabel->setText(QCoreApplication::translate("SettingsDialog", "FTP proxy:", nullptr));
        m_ftpProxyPortLabel->setText(QCoreApplication::translate("SettingsDialog", "Port:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(m_network), QCoreApplication::translate("SettingsDialog", "Network", nullptr));
        m_httpAuthLabel->setText(QCoreApplication::translate("SettingsDialog", "Add Username and Password for authentication if needed.", nullptr));
        m_useTmpRepositories->setText(QCoreApplication::translate("SettingsDialog", "Use temporary repositories only", nullptr));
        m_addRepository->setText(QCoreApplication::translate("SettingsDialog", "Add", nullptr));
        m_removeRepository->setText(QCoreApplication::translate("SettingsDialog", "Remove", nullptr));
        m_testRepository->setText(QCoreApplication::translate("SettingsDialog", "Test", nullptr));
        m_selectAll->setText(QCoreApplication::translate("SettingsDialog", "Select All", nullptr));
        m_deselectAll->setText(QCoreApplication::translate("SettingsDialog", "Deselect All", nullptr));
        m_showPasswords->setText(QCoreApplication::translate("SettingsDialog", "Show Passwords", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(m_repositories), QCoreApplication::translate("SettingsDialog", "Repositories", nullptr));
        m_cacheDescriptionLabel->setText(QCoreApplication::translate("SettingsDialog", "The meta information from remote repositories is cached to disk to improve loading times. You may select another directory to store the cache or clear the contents of the current cache.", nullptr));
        m_cachePathLabel->setText(QCoreApplication::translate("SettingsDialog", "Path for cache:", nullptr));
        m_clearCacheProgressLabel->setText(QCoreApplication::translate("SettingsDialog", "Clearing cache...", nullptr));
#if QT_CONFIG(tooltip)
        m_clearPushButton->setToolTip(QCoreApplication::translate("SettingsDialog", "Deletes the contents of the cache directory", nullptr));
#endif // QT_CONFIG(tooltip)
        m_clearPushButton->setText(QCoreApplication::translate("SettingsDialog", "Clear cache", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(m_localCache), QCoreApplication::translate("SettingsDialog", "Local cache", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
