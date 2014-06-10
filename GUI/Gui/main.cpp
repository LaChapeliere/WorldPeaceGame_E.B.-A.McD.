#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include "pays.h"


int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

    //Creation d'une fenetre de demarrage qui permet de creer une nouvelle partie ou d'en charger une
    QWidget fenetreDemarrage;
    fenetreDemarrage.setFixedSize(300, 150);

    QLabel *messageBienvenue = new QLabel(&fenetreDemarrage);
    messageBienvenue->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    messageBienvenue->setText("Bienvenue");
    messageBienvenue->setAlignment(Qt::AlignHCenter);
    messageBienvenue->setGeometry(100, 10, 100, 20);

    fenetreDemarrage.show();
    return app.exec();
}
