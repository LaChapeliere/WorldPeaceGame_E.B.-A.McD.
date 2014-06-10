#include "pays.h"


using namespace std;


//Constructeur
Pays::Pays(string nom, string mdpNucleaire, int infanterie, int blindes, const char* fichierMarqueurs): m_nom(nom), m_mdpNucleaire(mdpNucleaire), m_armee(Armee(infanterie, blindes))
{
    ifstream monFlux(fichierMarqueurs);

    if(monFlux)
    {
        string description;
        while (getline(monFlux, description))
        {
            m_marqueurs.push_back(Marqueur(description));
        }
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl; //Gestion pourrie des erreurs parce qu'ils iront pas voir la console, a changer
    }

    reseau(m_marqueurs); //Creation des liens entre les marqueurs
}
