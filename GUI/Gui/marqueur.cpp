#include "marqueur.h"

using namespace std;

//Constructeur
Marqueur::Marqueur(string description)
{
    stringstream stream(description);
    stream >> m_nom;
    stream >> m_valeur;
}

//Modifie la valeur d'un marqueur et repercute ces modifications sur les marqueurs fils en fonction des actions des joueurs
void Marqueur::modifier_valeur(double difference)
{
    //Modifie la valeur du marqueur
    if (m_valeur > difference)
    {
        m_valeur += difference;
    }
    else
    {
        difference = m_valeur;
        m_valeur = 0;
    }

    //Si la difference est plus superieure ou egale à 10, elle se propage aux marqueurs fils
    if (difference >= 10)
    {
        for (int i(0); i<m_filsAug.size(); i++)
        {
            m_filsAug[i]->modifier_valeur(difference/10);
        }
        for (int i(0); i<m_filsDim.size(); i++)
        {
            m_filsDim[i]->modifier_valeur(-(difference/10));
        }
    }
}


//Ajoute un marqueur aux marqueurs fils qui sont affectes positivement par le marqueur
void Marqueur::operator+=(Marqueur *marqueur)
{
    m_filsAug.push_back(marqueur);
}

//Ajoute un marqueur aux marqueurs fils qui sont affectes negativement par le marqueur
void Marqueur::operator-=(Marqueur *marqueur)
{
    m_filsDim.push_back(marqueur);
}
