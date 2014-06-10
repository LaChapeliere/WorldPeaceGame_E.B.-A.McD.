#include "marqueur.h"

using namespace std;

Marqueur::Marqueur(string description)
{
    string word;
    streamstring stream(description);
    getline(stream, word, ';');
    m_nom = word;
    getline(stream, word, ';');
    m_valeur = word;
}

Marqueur::modifier_valeur(double difference)
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
        for (int i(0); i<length(m_filsAug); i++)
        {
            m_filsAug->modifier_valeur(difference/10);
        }
        for (int i(0); i<length(m_filsDim); i++)
        {
            m_filsDim->modifier_valeur(-(difference/10));
        }
    }
}

void operator+=(Marqueur *marqueur)
{
    m_filsAug.push_back(marqueur);
}

void operator-=(Marqueur *marqueur)
{
    m_filsDim.push_back(marqueur);
}
