#include "creationpays.h"

using namespace std;

CreationPays::CreationPays(QWidget *parent) :
    QDialog(parent)
{
    //Creation des champs
    //Liste deroulante pour la couleur du pays
    QComboBox *m_listeCouleur = new QComboBox(this);
    m_listeCouleur->addItem("Bleu");
    m_listeCouleur->addItem("Rouge");
    m_listeCouleur->addItem("Vert");
    m_listeCouleur->addItem("Jaune");
    //Nom du pays
    QLineEdit *m_nom = new QLineEdit;
    m_nom->setInputMask("aaaaaaaaaaaa"); //Alphabetic characters only, max 12
    //Mot de passe pour les armes nucléaires
    QLineEdit *m_mdpNucleaire = new QLineEdit;
    m_mdpNucleaire->setEchoMode(QLineEdit::Password);
    m_mdpNucleaire->setInputMask("NNNN"); //4 alphanumeric characters
    //Layout formulaire
    QFormLayout *layoutInfos = new QFormLayout;
    layoutInfos->addRow("Couleur du pays", m_listeCouleur);
    layoutInfos->addRow("Nom du pays", m_nom);
    layoutInfos->addRow("Code nucléaire (4 chiffres ou lettres)", m_mdpNucleaire);
    setLayout(layoutInfos);
}

void CreationPays::creerUnPays()
{
    //Recupere les informations entrees par le joueur
    QString nom(m_nom->text());
    QString mdpNucleaire(m_mdpNucleaire->text());
    QString couleur(m_listeCouleur->currentText());

    //Cree les noms de fichiers correspondant a la couleur
    QString fichierMarqueurs(couleur);
    fichierMarqueurs.append(QString("Marqueurs.rtf"));
    const char* cMarqueurs= fichierMarqueurs.toStdString().c_str();
    QString fichierInfos(couleur);
    fichierInfos.append(QString("Infos.rft"));
    const char* cInfos= fichierInfos.toStdString().c_str();

    //Cree un Pays avec ces informations, portant le nom de la couleur
    if (couleur == "Bleu")
    {
        extern Pays *Bleu;
        Bleu = new Pays(nom.toStdString(), mdpNucleaire.toStdString(), cMarqueurs);
    }
    if (couleur == "Rouge")
    {
        extern Pays *Rouge;
        Rouge = new Pays(nom.toStdString(), mdpNucleaire.toStdString(), cMarqueurs);
    }
    if (couleur == "Vert")
    {
        extern Pays *Vert;
        Vert = new Pays(nom.toStdString(), mdpNucleaire.toStdString(), cMarqueurs);
    }
    if (couleur == "Jaune")
    {
        extern Pays *Jaune;
        Jaune = new Pays(nom.toStdString(), mdpNucleaire.toStdString(), cMarqueurs);
    }

}
