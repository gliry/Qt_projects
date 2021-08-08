#include "mainwindow.h"

#include <QApplication>
#include <QtWidgets>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget wgt;

    QPushButton* pcmdA = new QPushButton("A");
    QPushButton* pcmdB = new QPushButton("B");


    // Layout setup

    QBoxLayout* pbxLayout = new QBoxLayout(QBoxLayout::LeftToRight);

    pbxLayout->addWidget(pcmdA);
    pbxLayout->addStretch(10);
    pbxLayout->addWidget(pcmdB);
    wgt.setLayout(pbxLayout);

    wgt.resize(350, 40);

    wgt.show();





    return app.exec();





}
