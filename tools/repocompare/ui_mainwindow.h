/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *productionRepo;
    QPushButton *productionButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *updateRepo;
    QPushButton *updateButton;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *exportButton;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(877, 613);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        productionRepo = new QComboBox(centralWidget);
        productionRepo->setObjectName(QString::fromUtf8("productionRepo"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(productionRepo->sizePolicy().hasHeightForWidth());
        productionRepo->setSizePolicy(sizePolicy1);
        productionRepo->setEditable(true);

        horizontalLayout->addWidget(productionRepo);

        productionButton = new QPushButton(centralWidget);
        productionButton->setObjectName(QString::fromUtf8("productionButton"));

        horizontalLayout->addWidget(productionButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        updateRepo = new QComboBox(centralWidget);
        updateRepo->setObjectName(QString::fromUtf8("updateRepo"));
        sizePolicy1.setHeightForWidth(updateRepo->sizePolicy().hasHeightForWidth());
        updateRepo->setSizePolicy(sizePolicy1);
        updateRepo->setEditable(true);

        horizontalLayout_2->addWidget(updateRepo);

        updateButton = new QPushButton(centralWidget);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));

        horizontalLayout_2->addWidget(updateButton);


        verticalLayout->addLayout(horizontalLayout_2);

        treeWidget = new QTreeWidget(centralWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        exportButton = new QPushButton(centralWidget);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));

        horizontalLayout_3->addWidget(exportButton);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 877, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "RepoCompare", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Production Repository:", nullptr));
        productionButton->setText(QCoreApplication::translate("MainWindow", "Receive", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Update Repository:", nullptr));
        updateButton->setText(QCoreApplication::translate("MainWindow", "Receive", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(10, QCoreApplication::translate("MainWindow", "New Update Text", nullptr));
        ___qtreewidgetitem->setText(9, QCoreApplication::translate("MainWindow", "New Checksum", nullptr));
        ___qtreewidgetitem->setText(8, QCoreApplication::translate("MainWindow", "New Date", nullptr));
        ___qtreewidgetitem->setText(7, QCoreApplication::translate("MainWindow", "New Version", nullptr));
        ___qtreewidgetitem->setText(6, QCoreApplication::translate("MainWindow", "Old Update Text", nullptr));
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("MainWindow", "Old Checksum", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("MainWindow", "Old Date", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("MainWindow", "Old Version", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("MainWindow", "Status", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "Update required", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "Component Name", nullptr));
        exportButton->setText(QCoreApplication::translate("MainWindow", "Export Update File", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
