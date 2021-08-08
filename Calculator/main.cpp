#include <QApplication>
#include "Calculator.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    Calculator   calculator;

    calculator.setWindowTitle("Калькулятор");
    calculator.resize(230, 200);

    calculator.show();

    return app.exec();
}

