#include <QDebug>
#include <QtWidgets>

int main (int argc, char **argv)
{
    QApplication app(argc, argv);
    QSpinBox spb;

    QPalette pal = spb.palette();

    pal.setBrush(QPalette::Button, QBrush(Qt::red, Qt::Dense3Pattern));
    pal.setColor(QPalette::ButtonText, Qt::blue);
    pal.setColor(QPalette::Active, QPalette::Base, Qt::green);

    spb.setPalette(pal);
    spb.resize(150, 74);
    spb.show();

    app.setStyle("Windows");

    return app.exec();


}
