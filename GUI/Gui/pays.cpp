#include "pays.h"


using namespace std;


//Constructeur
//Changer la facon dont est creee l'armee
Pays::Pays(string nom, string mdpNucleaire, const char* fichierMarqueurs): m_nom(nom), m_mdpNucleaire(mdpNucleaire), m_armee(Armee(0, 0))
{
    ifstream monFlux(fichierMarqueurs);

    if(monFlux)
    {
        string description;
        getline(monFlux, description); //Saute la ligne d'en-tete
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
