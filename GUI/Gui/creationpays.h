#ifndef CREATIONPAYS_H
#define CREATIONPAYS_H

#include <QDialog>
#include <QLabel>
#include <QComboBox>
#include <QLayout>
#include <QLineEdit>
#include <QFormLayout>
#include <QPushButton>
#include <QString>
#include <string>
#include "pays.h"

class CreationPays : public QDialog
{
    Q_OBJECT
public:
    explicit CreationPays(QWidget *parent = 0);

signals:

public slots:
    void creerUnPays();

private:
    QComboBox *m_listeCouleur;
    QLineEdit *m_nom;
    QLineEdit *m_mdpNucleaire;

};

#endif // CREATIONPAYS_H
