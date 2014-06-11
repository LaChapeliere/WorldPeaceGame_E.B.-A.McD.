#ifndef PAYS_H
#define PAYS_H

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "marqueur.h"
#include "reseau.h"
#include "armee.h"

class Pays
{
public:
    Pays(std::string nom, std::string mdpNucleaire, const char *fichierMarqueurs);

private:
    std::string m_nom;
    std::string m_mdpNucleaire;
    std::vector<Marqueur> m_marqueurs;
    Armee m_armee;

};

#endif // PAYS_H
