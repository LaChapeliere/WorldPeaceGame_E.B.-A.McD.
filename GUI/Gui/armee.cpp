#include "armee.h"

using namespace std;

int coutInfanterie = 10; //Arbitraire, a changer pour equilibrer le jeu;
int coutBlindes = 20; //Arbitraire, a changer pour equilibrer le jeu;

//Constructeur
Armee::Armee(int infanterie, int blindes): m_infanterie(infanterie), m_blindes(blindes)
{
}

//Calcule le cout par tour de l'armee
int Armee::coutArmee()
{
    return coutInfanterie*m_infanterie + coutBlindes*m_blindes;
}
