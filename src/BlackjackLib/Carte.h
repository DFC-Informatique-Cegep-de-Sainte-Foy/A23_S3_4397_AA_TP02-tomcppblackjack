#pragma once
#include <iostream>
class Carte
{
    public:
        Carte(int p_valeur, std::string p_symbole);
        ~Carte();
        static std::string symboleToString(std::string p_symbole);
        int ObtenirValeur() const;
    private:
        std::string m_symbole;
        int m_valeur;
};

