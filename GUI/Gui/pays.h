#ifndef PAYS_H
#define PAYS_H

#include <string>
#include <vector>
#include <iostream>

class Pays
{
public:
    Pays();

private:
    string m_nom;
    string m_mdpNucleaire;
    vector<Marqueur*> m_marqueurs;
    Armee m_armee;

};

#endif // PAYS_H
