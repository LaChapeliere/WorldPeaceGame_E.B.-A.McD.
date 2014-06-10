#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    QWidget *zoneCentrale = new QWidget;
    setCentralWidget(zoneCentrale);

    //Stuff a mettre dans la fenetre centrale


    //Barre de menus en haut
    menuBar()->setNativeMenuBar(false); //Sinon le menu ne s'affiche pas
    QMenu *menuQuitter = menuBar()->addMenu("Quitter");

    QMenu *menuNouvelle = menuBar()->addMenu("Nouvelle Partie");
    QMenu *menuCharger = menuBar()->addMenu("Charger une partie");
    QMenu *menuSauvegarder = menuBar()->addMenu("Sauvegarder la partie");

    QAction *actionQuitter = new QAction("&Quitter", this);
    menuQuitter->addAction(actionQuitter);
    connect(actionQuitter, SIGNAL(triggered()), qApp, SLOT(quit()));

}
