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
    fenetreDemarrage.setFixedSize(900, 450);

    //Police utilisée pour les textes et les boutons
    QFont maPolice("Garamond", 14);

    //Message de bienvenue
    QLabel *messageBienvenue = new QLabel(&fenetreDemarrage);
    messageBienvenue->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    messageBienvenue->setText("Bienvenue");
    messageBienvenue->setAlignment(Qt::AlignHCenter);
    messageBienvenue->setGeometry(300, 20, 300, 30);
    messageBienvenue->setFont(QFont("Garamond", 18));

    //Bouton pour créer une nouvelle partie
    QPushButton *boutonNouvellePartie = new QPushButton("Créer une nouvelle partie", &fenetreDemarrage);
    boutonNouvellePartie->setFont(maPolice);
    boutonNouvellePartie->setCursor(Qt::PointingHandCursor);
    boutonNouvellePartie->setGeometry(300, 100, 300, 70);

    //Bouton pour charger une partie
    QPushButton *boutonChargerPartie = new QPushButton("Charger une partie", &fenetreDemarrage);
    boutonChargerPartie->setFont(maPolice);
    boutonChargerPartie->setCursor(Qt::PointingHandCursor);
    boutonChargerPartie->setGeometry(300, 200, 300, 70);

    //Bouton pour quitter l'application
    QPushButton *boutonQuitter = new QPushButton("Quitter", &fenetreDemarrage);
    boutonQuitter->setFont(maPolice);
    boutonQuitter->setCursor(Qt::PointingHandCursor);
    boutonQuitter->setGeometry(300, 300, 300, 70);
    QObject::connect(boutonQuitter, SIGNAL(clicked()), qApp, SLOT(quit()));

    fenetreDemarrage.show();
    return app.exec();
}
