#include <QApplication>
#include "pays.h"


int main(int argc, char *argv[])
{
    int coutInfanterie = 10 //Arbitraire, a changer pour equilibrer le jeu;
    int coutBlindes = 20 //Arbitraire, a changer pour equilibrer le jeu;

    QApplication app(argc, argv);

    return app.exec();
}
