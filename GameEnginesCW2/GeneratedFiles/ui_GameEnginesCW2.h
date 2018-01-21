/********************************************************************************
** Form generated from reading UI file 'GameEnginesCW2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEENGINESCW2_H
#define UI_GAMEENGINESCW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_GameEnginesCW2Class
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelFPS;
    QLCDNumber *lcdFPS;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_39;
    QLabel *label_20;
    QLabel *label_21;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_18;
    QLineEdit *leditTimestep;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *buStop;
    QPushButton *buSwitchState;
    QPushButton *buRestart;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_23;
    QLabel *label_24;
    QLineEdit *leditForceX;
    QLabel *label_25;
    QLineEdit *leditForceY;
    QLabel *label_26;
    QLineEdit *leditForceZ;
    QPushButton *buAddGlobalForce;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_15;
    QLineEdit *leditMass;
    QLabel *label_16;
    QLineEdit *leditRestitution;
    QLabel *label_17;
    QLineEdit *leditRadius;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *leditRed;
    QLabel *label_13;
    QLineEdit *leditGreen;
    QLabel *label_14;
    QLineEdit *leditBlue;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *leditX;
    QLabel *label_9;
    QLineEdit *leditY;
    QLabel *label_10;
    QLineEdit *leditZ;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *leditVelX;
    QLabel *label_5;
    QLineEdit *leditVelY;
    QLabel *label_6;
    QLineEdit *leditVelZ;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *buCreateSphere;
    QPushButton *buCreateRandomSphere;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    GLWidget *openGLWidget;

    void setupUi(QMainWindow *GameEnginesCW2Class)
    {
        if (GameEnginesCW2Class->objectName().isEmpty())
            GameEnginesCW2Class->setObjectName(QStringLiteral("GameEnginesCW2Class"));
        GameEnginesCW2Class->resize(1178, 860);
        centralWidget = new QWidget(GameEnginesCW2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelFPS = new QLabel(centralWidget);
        labelFPS->setObjectName(QStringLiteral("labelFPS"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelFPS->sizePolicy().hasHeightForWidth());
        labelFPS->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        labelFPS->setFont(font);
        labelFPS->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelFPS);

        lcdFPS = new QLCDNumber(centralWidget);
        lcdFPS->setObjectName(QStringLiteral("lcdFPS"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush2(QColor(255, 255, 220, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        lcdFPS->setPalette(palette);
        lcdFPS->setFrameShape(QFrame::NoFrame);
        lcdFPS->setSmallDecimalPoint(true);
        lcdFPS->setSegmentStyle(QLCDNumber::Filled);

        verticalLayout_2->addWidget(lcdFPS);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_39 = new QLabel(centralWidget);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setFont(font);
        label_39->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_39);


        verticalLayout_2->addLayout(verticalLayout_9);

        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        QPalette palette1;
        QBrush brush3(QColor(75, 75, 75, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        QBrush brush4(QColor(57, 57, 57, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush4);
        QBrush brush5(QColor(85, 85, 85, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush5);
        QBrush brush6(QColor(71, 71, 71, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush7(QColor(28, 28, 28, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush7);
        QBrush brush8(QColor(38, 38, 38, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush8);
        QBrush brush9(QColor(59, 59, 59, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush9);
        QBrush brush10(QColor(56, 56, 56, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush10);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush8);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        label_20->setPalette(palette1);
        label_20->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_20);

        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        QBrush brush11(QColor(120, 120, 120, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        label_21->setPalette(palette2);
        label_21->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_21);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(16777215, 30));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_12->addWidget(label_18);

        leditTimestep = new QLineEdit(centralWidget);
        leditTimestep->setObjectName(QStringLiteral("leditTimestep"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leditTimestep->sizePolicy().hasHeightForWidth());
        leditTimestep->setSizePolicy(sizePolicy2);
        leditTimestep->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_12->addWidget(leditTimestep);


        verticalLayout_4->addLayout(horizontalLayout_12);

        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        QPalette palette3;
        QBrush brush12(QColor(88, 88, 88, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        label_19->setPalette(palette3);
        QFont font1;
        font1.setItalic(false);
        label_19->setFont(font1);

        verticalLayout_4->addWidget(label_19);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        buStop = new QPushButton(centralWidget);
        buStop->setObjectName(QStringLiteral("buStop"));

        horizontalLayout_3->addWidget(buStop);

        buSwitchState = new QPushButton(centralWidget);
        buSwitchState->setObjectName(QStringLiteral("buSwitchState"));
        buSwitchState->setEnabled(true);

        horizontalLayout_3->addWidget(buSwitchState);

        buRestart = new QPushButton(centralWidget);
        buRestart->setObjectName(QStringLiteral("buRestart"));

        horizontalLayout_3->addWidget(buRestart);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font);
        label_22->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_22);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy3);
        label_23->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_9->addWidget(label_23);

        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        sizePolicy3.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy3);
        label_24->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_9->addWidget(label_24);

        leditForceX = new QLineEdit(centralWidget);
        leditForceX->setObjectName(QStringLiteral("leditForceX"));
        sizePolicy2.setHeightForWidth(leditForceX->sizePolicy().hasHeightForWidth());
        leditForceX->setSizePolicy(sizePolicy2);
        leditForceX->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_9->addWidget(leditForceX);

        label_25 = new QLabel(centralWidget);
        label_25->setObjectName(QStringLiteral("label_25"));
        sizePolicy3.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy3);
        label_25->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_9->addWidget(label_25);

        leditForceY = new QLineEdit(centralWidget);
        leditForceY->setObjectName(QStringLiteral("leditForceY"));
        sizePolicy2.setHeightForWidth(leditForceY->sizePolicy().hasHeightForWidth());
        leditForceY->setSizePolicy(sizePolicy2);
        leditForceY->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_9->addWidget(leditForceY);

        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QStringLiteral("label_26"));
        sizePolicy3.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy3);
        label_26->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_9->addWidget(label_26);

        leditForceZ = new QLineEdit(centralWidget);
        leditForceZ->setObjectName(QStringLiteral("leditForceZ"));
        sizePolicy2.setHeightForWidth(leditForceZ->sizePolicy().hasHeightForWidth());
        leditForceZ->setSizePolicy(sizePolicy2);
        leditForceZ->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_9->addWidget(leditForceZ);


        verticalLayout_8->addLayout(horizontalLayout_9);


        verticalLayout_2->addLayout(verticalLayout_8);

        buAddGlobalForce = new QPushButton(centralWidget);
        buAddGlobalForce->setObjectName(QStringLiteral("buAddGlobalForce"));

        verticalLayout_2->addWidget(buAddGlobalForce);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMaximumSize(QSize(16777215, 30));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_11->addWidget(label_15);

        leditMass = new QLineEdit(centralWidget);
        leditMass->setObjectName(QStringLiteral("leditMass"));
        sizePolicy2.setHeightForWidth(leditMass->sizePolicy().hasHeightForWidth());
        leditMass->setSizePolicy(sizePolicy2);
        leditMass->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_11->addWidget(leditMass);

        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_11->addWidget(label_16);

        leditRestitution = new QLineEdit(centralWidget);
        leditRestitution->setObjectName(QStringLiteral("leditRestitution"));
        sizePolicy2.setHeightForWidth(leditRestitution->sizePolicy().hasHeightForWidth());
        leditRestitution->setSizePolicy(sizePolicy2);
        leditRestitution->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_11->addWidget(leditRestitution);

        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_11->addWidget(label_17);

        leditRadius = new QLineEdit(centralWidget);
        leditRadius->setObjectName(QStringLiteral("leditRadius"));
        sizePolicy2.setHeightForWidth(leditRadius->sizePolicy().hasHeightForWidth());
        leditRadius->setSizePolicy(sizePolicy2);
        leditRadius->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_11->addWidget(leditRadius);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);
        label_11->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(label_11);

        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy3.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy3);
        label_12->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_8->addWidget(label_12);

        leditRed = new QLineEdit(centralWidget);
        leditRed->setObjectName(QStringLiteral("leditRed"));
        sizePolicy2.setHeightForWidth(leditRed->sizePolicy().hasHeightForWidth());
        leditRed->setSizePolicy(sizePolicy2);
        leditRed->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_8->addWidget(leditRed);

        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy3.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy3);
        label_13->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_8->addWidget(label_13);

        leditGreen = new QLineEdit(centralWidget);
        leditGreen->setObjectName(QStringLiteral("leditGreen"));
        sizePolicy2.setHeightForWidth(leditGreen->sizePolicy().hasHeightForWidth());
        leditGreen->setSizePolicy(sizePolicy2);
        leditGreen->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_8->addWidget(leditGreen);

        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy3.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy3);
        label_14->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_8->addWidget(label_14);

        leditBlue = new QLineEdit(centralWidget);
        leditBlue->setObjectName(QStringLiteral("leditBlue"));
        sizePolicy2.setHeightForWidth(leditBlue->sizePolicy().hasHeightForWidth());
        leditBlue->setSizePolicy(sizePolicy2);
        leditBlue->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_8->addWidget(leditBlue);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_6->addWidget(label_7);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy3.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy3);
        label_8->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_6->addWidget(label_8);

        leditX = new QLineEdit(centralWidget);
        leditX->setObjectName(QStringLiteral("leditX"));
        sizePolicy2.setHeightForWidth(leditX->sizePolicy().hasHeightForWidth());
        leditX->setSizePolicy(sizePolicy2);
        leditX->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_6->addWidget(leditX);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy3.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy3);
        label_9->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_6->addWidget(label_9);

        leditY = new QLineEdit(centralWidget);
        leditY->setObjectName(QStringLiteral("leditY"));
        sizePolicy2.setHeightForWidth(leditY->sizePolicy().hasHeightForWidth());
        leditY->setSizePolicy(sizePolicy2);
        leditY->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_6->addWidget(leditY);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy3.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy3);
        label_10->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_6->addWidget(label_10);

        leditZ = new QLineEdit(centralWidget);
        leditZ->setObjectName(QStringLiteral("leditZ"));
        sizePolicy2.setHeightForWidth(leditZ->sizePolicy().hasHeightForWidth());
        leditZ->setSizePolicy(sizePolicy2);
        leditZ->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_6->addWidget(leditZ);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_2->addWidget(label_4);

        leditVelX = new QLineEdit(centralWidget);
        leditVelX->setObjectName(QStringLiteral("leditVelX"));
        sizePolicy2.setHeightForWidth(leditVelX->sizePolicy().hasHeightForWidth());
        leditVelX->setSizePolicy(sizePolicy2);
        leditVelX->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(leditVelX);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);
        label_5->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_2->addWidget(label_5);

        leditVelY = new QLineEdit(centralWidget);
        leditVelY->setObjectName(QStringLiteral("leditVelY"));
        sizePolicy2.setHeightForWidth(leditVelY->sizePolicy().hasHeightForWidth());
        leditVelY->setSizePolicy(sizePolicy2);
        leditVelY->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(leditVelY);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);
        label_6->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_2->addWidget(label_6);

        leditVelZ = new QLineEdit(centralWidget);
        leditVelZ->setObjectName(QStringLiteral("leditVelZ"));
        sizePolicy2.setHeightForWidth(leditVelZ->sizePolicy().hasHeightForWidth());
        leditVelZ->setSizePolicy(sizePolicy2);
        leditVelZ->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(leditVelZ);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        buCreateSphere = new QPushButton(centralWidget);
        buCreateSphere->setObjectName(QStringLiteral("buCreateSphere"));

        horizontalLayout_5->addWidget(buCreateSphere);

        buCreateRandomSphere = new QPushButton(centralWidget);
        buCreateRandomSphere->setObjectName(QStringLiteral("buCreateRandomSphere"));
        buCreateRandomSphere->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_5->addWidget(buCreateRandomSphere);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));

        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout_2);

        openGLWidget = new GLWidget(centralWidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(openGLWidget->sizePolicy().hasHeightForWidth());
        openGLWidget->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(openGLWidget);

        GameEnginesCW2Class->setCentralWidget(centralWidget);

        retranslateUi(GameEnginesCW2Class);
        QObject::connect(pushButton, SIGNAL(released()), GameEnginesCW2Class, SLOT(close()));

        QMetaObject::connectSlotsByName(GameEnginesCW2Class);
    } // setupUi

    void retranslateUi(QMainWindow *GameEnginesCW2Class)
    {
        GameEnginesCW2Class->setWindowTitle(QApplication::translate("GameEnginesCW2Class", "GameEnginesCW2", Q_NULLPTR));
        labelFPS->setText(QApplication::translate("GameEnginesCW2Class", "FPS", Q_NULLPTR));
        label_39->setText(QApplication::translate("GameEnginesCW2Class", "Camera", Q_NULLPTR));
        label_20->setText(QApplication::translate("GameEnginesCW2Class", "Use mouse to rotate the camera", Q_NULLPTR));
        label_21->setText(QApplication::translate("GameEnginesCW2Class", "Use Ctrl+Mouse Wheel to zoom in and out", Q_NULLPTR));
        label->setText(QApplication::translate("GameEnginesCW2Class", "Simulation", Q_NULLPTR));
        label_18->setText(QApplication::translate("GameEnginesCW2Class", "Timestep (s)", Q_NULLPTR));
        leditTimestep->setText(QApplication::translate("GameEnginesCW2Class", "0.016", Q_NULLPTR));
        label_19->setText(QApplication::translate("GameEnginesCW2Class", "Pause and play for the timestep change to take place", Q_NULLPTR));
        buStop->setText(QApplication::translate("GameEnginesCW2Class", "Stop", Q_NULLPTR));
        buSwitchState->setText(QApplication::translate("GameEnginesCW2Class", "Play", Q_NULLPTR));
        buRestart->setText(QApplication::translate("GameEnginesCW2Class", "Restart", Q_NULLPTR));
        label_22->setText(QApplication::translate("GameEnginesCW2Class", "Global Force", Q_NULLPTR));
        label_23->setText(QApplication::translate("GameEnginesCW2Class", "Force (N)", Q_NULLPTR));
        label_24->setText(QApplication::translate("GameEnginesCW2Class", "x", Q_NULLPTR));
        leditForceX->setText(QApplication::translate("GameEnginesCW2Class", "0", Q_NULLPTR));
        label_25->setText(QApplication::translate("GameEnginesCW2Class", "y", Q_NULLPTR));
        leditForceY->setText(QApplication::translate("GameEnginesCW2Class", "0", Q_NULLPTR));
        label_26->setText(QApplication::translate("GameEnginesCW2Class", "z", Q_NULLPTR));
        leditForceZ->setText(QApplication::translate("GameEnginesCW2Class", "0", Q_NULLPTR));
        buAddGlobalForce->setText(QApplication::translate("GameEnginesCW2Class", "Add Global Force", Q_NULLPTR));
        label_2->setText(QApplication::translate("GameEnginesCW2Class", "Sphere", Q_NULLPTR));
        label_15->setText(QApplication::translate("GameEnginesCW2Class", "Mass (kg)", Q_NULLPTR));
        leditMass->setText(QApplication::translate("GameEnginesCW2Class", "10", Q_NULLPTR));
        label_16->setText(QApplication::translate("GameEnginesCW2Class", "Restitution", Q_NULLPTR));
        leditRestitution->setText(QApplication::translate("GameEnginesCW2Class", "1", Q_NULLPTR));
        label_17->setText(QApplication::translate("GameEnginesCW2Class", "Radius (m)", Q_NULLPTR));
        leditRadius->setText(QApplication::translate("GameEnginesCW2Class", "0.2", Q_NULLPTR));
        label_11->setText(QApplication::translate("GameEnginesCW2Class", "Colour", Q_NULLPTR));
        label_12->setText(QApplication::translate("GameEnginesCW2Class", "R", Q_NULLPTR));
        leditRed->setText(QApplication::translate("GameEnginesCW2Class", "1", Q_NULLPTR));
        label_13->setText(QApplication::translate("GameEnginesCW2Class", "G", Q_NULLPTR));
        leditGreen->setText(QApplication::translate("GameEnginesCW2Class", "0.2", Q_NULLPTR));
        label_14->setText(QApplication::translate("GameEnginesCW2Class", "B", Q_NULLPTR));
        leditBlue->setText(QApplication::translate("GameEnginesCW2Class", "0.2", Q_NULLPTR));
        label_7->setText(QApplication::translate("GameEnginesCW2Class", "Position", Q_NULLPTR));
        label_8->setText(QApplication::translate("GameEnginesCW2Class", "x", Q_NULLPTR));
        leditX->setText(QApplication::translate("GameEnginesCW2Class", "0", Q_NULLPTR));
        label_9->setText(QApplication::translate("GameEnginesCW2Class", "y", Q_NULLPTR));
        leditY->setText(QApplication::translate("GameEnginesCW2Class", "1", Q_NULLPTR));
        label_10->setText(QApplication::translate("GameEnginesCW2Class", "z", Q_NULLPTR));
        leditZ->setText(QApplication::translate("GameEnginesCW2Class", "2", Q_NULLPTR));
        label_3->setText(QApplication::translate("GameEnginesCW2Class", "Velocity", Q_NULLPTR));
        label_4->setText(QApplication::translate("GameEnginesCW2Class", "x", Q_NULLPTR));
        leditVelX->setText(QApplication::translate("GameEnginesCW2Class", "0", Q_NULLPTR));
        label_5->setText(QApplication::translate("GameEnginesCW2Class", "y", Q_NULLPTR));
        leditVelY->setText(QApplication::translate("GameEnginesCW2Class", "0", Q_NULLPTR));
        label_6->setText(QApplication::translate("GameEnginesCW2Class", "z", Q_NULLPTR));
        leditVelZ->setText(QApplication::translate("GameEnginesCW2Class", "0", Q_NULLPTR));
        buCreateSphere->setText(QApplication::translate("GameEnginesCW2Class", "Create Sphere", Q_NULLPTR));
        buCreateRandomSphere->setText(QApplication::translate("GameEnginesCW2Class", "Random", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GameEnginesCW2Class", "Quit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GameEnginesCW2Class: public Ui_GameEnginesCW2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEENGINESCW2_H
