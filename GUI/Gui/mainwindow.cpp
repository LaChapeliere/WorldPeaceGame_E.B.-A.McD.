#include "mainwindow.h"

//Constructeur
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    //Titre de la fenetre principale
    setWindowTitle("Jeu de la Paix");



    //Barre de menus en haut
    menuBar()->setNativeMenuBar(false); //Sinon le menu ne s'affiche pas
    QMenu *menuFichier = menuBar()->addMenu("Fichier");
    QAction *actionNouvellePartie = new QAction("Nouvelle Partie", this);
    menuFichier->addAction(actionNouvellePartie);
    QObject::connect(actionNouvellePartie, SIGNAL(triggered()), this, SLOT(fenetreCreationPays()));
    QAction *actionSauverPartie = new QAction("Sauvegarder la partie", this);
    menuFichier->addAction(actionSauverPartie);
    QAction *actionChargerPartie = new QAction("Charger une partie", this);
    menuFichier->addAction(actionChargerPartie);
    QAction *actionQuitter = new QAction("Quitter", this);
    menuFichier->addAction(actionQuitter);
    QObject::connect(actionQuitter, SIGNAL(triggered()), qApp, SLOT(quit()));
}


//Gestion de la fenetre de creation de pays
void MainWindow::fenetreCreationPays()
{
    //Definition de la zone centrale
    QWidget *zoneCreationPays = new QWidget;

    //Création du widget pour chaque pays
    CreationPays *infosPays1 = new CreationPays;
    CreationPays *infosPays2 = new CreationPays;
    CreationPays *infosPays3 = new CreationPays;
    CreationPays *infosPays4 = new CreationPays;

    //Creation de boutons Valider et Annuler
    QPushButton *boutonValiderCreationPays = new QPushButton("Valider");
    //Un clic sur le bouton Valider entraine la fermeture du widget de creation de pays et la creation de quatre pays avec les informations fournies
    QObject::connect(boutonValiderCreationPays, SIGNAL(clicked()), infosPays1, SLOT(creerUnPays()));
    QObject::connect(boutonValiderCreationPays, SIGNAL(clicked()), infosPays2, SLOT(creerUnPays()));
    QObject::connect(boutonValiderCreationPays, SIGNAL(clicked()), infosPays3, SLOT(creerUnPays()));
    QObject::connect(boutonValiderCreationPays, SIGNAL(clicked()), infosPays4, SLOT(creerUnPays()));
    QObject::connect(boutonValiderCreationPays, SIGNAL(clicked()), zoneCreationPays, SLOT(close()));
    QPushButton *boutonAnnulerCreationPays = new QPushButton("Annuler");
    //Un clic sur le bouton Annuler entraine la fermeture du widget de creation de pays
    QObject::connect(boutonAnnulerCreationPays, SIGNAL(clicked()), zoneCreationPays, SLOT(close()));

    //Layout grille
    QGridLayout *layoutGrille = new QGridLayout;
    layoutGrille->addWidget(infosPays1, 0, 0);
    layoutGrille->addWidget(infosPays2, 0, 1);
    layoutGrille->addWidget(infosPays3, 1, 0);
    layoutGrille->addWidget(infosPays4, 1, 1);
    layoutGrille->addWidget(boutonValiderCreationPays, 2, 0);
    layoutGrille->addWidget(boutonAnnulerCreationPays, 2, 1);

    zoneCreationPays->setLayout(layoutGrille);

    setCentralWidget(zoneCreationPays);
}

