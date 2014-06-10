#include "pays.h"
#include "marqueur.h"
#include "reseau.h"
#include "armee.h"

using namespace std;


//Constructeur
Pays::Pays(string nom, string mdpNucleaire, int infanterie, int blindes, string fichierMarqueurs): m_nom(nom), m_mdpNucleaire(mdpNucleaire), Armee(infanterie, blindes)
{
    ifstream monFlux(fichierMarqueurs);

    if(monFlux)
    {
        string description;
        while (getline(monFlux, ligne))
        {
            m_marqueurs.push_back(Marqueur(ligne));
        }
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl; //Gestion pourrie des erreurs parce qu'ils iront pas voir la console, a changer
    }

    reseau(m_marqueurs); //Creation des liens entre les marqueurs
}
