#ifndef MARQUEUR_H
#define MARQUEUR_H

#include <string>
#include <vector>
#include <streamstring>

class Marqueur
{
public:
    Marqueur(string description);
    void modifier_valeur(double difference);

private:
    string m_nom;
    double m_valeur;
    vector<Marqueur*> m_filsAug;
    vector<Marqueur*> m_filsDim;
};

#endif // MARQUEUR_H
