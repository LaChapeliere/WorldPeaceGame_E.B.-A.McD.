#ifndef MARQUEUR_H
#define MARQUEUR_H

#include <string>
#include <vector>
#include <sstream>

class Marqueur
{
public:
    Marqueur(std::string description);
    void modifier_valeur(double difference);
    void operator+=(Marqueur *marqueur);
    void operator-=(Marqueur *marqueur);

private:
    std::string m_nom;
    double m_valeur;
    std::vector<Marqueur*> m_filsAug;
    std::vector<Marqueur*> m_filsDim;
};

#endif // MARQUEUR_H
