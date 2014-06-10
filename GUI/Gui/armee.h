#ifndef ARMEE_H
#define ARMEE_H

class Armee //Decrit les unites contenues dans l'armee d'un pays, permet notamment le calcul du cout de l'armee
{
public:
    Armee(int infanterie, int blindes);
    int coutArmee();

private:
    int m_infanterie;
    int m_blindes;
};

#endif // ARMEE_H
