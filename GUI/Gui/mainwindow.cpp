#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    QWidget *zoneCentrale = new QWidget;
    setCentralWidget(zoneCentrale);

    //Stuff a mettre dans la fenetre centrale


    //Barre de menus en haut
    menuBar()->setNativeMenuBar(false); //Sinon le menu ne s'affiche pas
    QMenu *menuFichier = menuBar()->addMenu("Fichier");
    QAction *actionNouvellePartie = new QAction("Nouvelle Partie", this);
    menuFichier->addAction(actionNouvellePartie);
    QAction *actionSauverPartie = new QAction("Sauvegarder la partie", this);
    menuFichier->addAction(actionSauverPartie);
    QAction *actionChargerPartie = new QAction("Charger une partie", this);
    menuFichier->addAction(actionChargerPartie);
    QAction *actionQuitter = new QAction("Quitter", this);
    menuFichier->addAction(actionQuitter);
    QObject::connect(actionQuitter, SIGNAL(triggered()), qApp, SLOT(quit()));

}
