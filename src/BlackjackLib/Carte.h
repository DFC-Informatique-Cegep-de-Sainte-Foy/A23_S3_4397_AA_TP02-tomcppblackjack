#pragma once
#include <iostream>

const std::string symboles[] = { "Coeur", "Carreau", "Trefle", "Pique" };

class Carte
{
    public:
        Carte(int p_valeur, std::string p_symbole);
        ~Carte();
        std::string obtenirTypeCarte() const;
        std::string obtenirSymbole() const;
        int ObtenirValeur() const;
    private:
        int m_valeur;
        int m_symboleIndex;
};

