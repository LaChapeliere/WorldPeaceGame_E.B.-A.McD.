#include "armee.h"

using namespace std;

//Constructeur
Armee::Armee(int infanterie, int blindes): m_infanterie(infanterie), m_blindes(blindes)
{
}

//Calcule le cout par tour de l'armee
int coutArmee()
{
    return coutInfanterie*m_infanterie + coutBlindes*m_blindes;
}
