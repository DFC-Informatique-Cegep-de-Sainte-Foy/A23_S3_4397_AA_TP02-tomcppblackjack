#pragma once
#include"ListeChaineeCartes.h"

template<typename T>
class Joueur
{

    public:
        Joueur();
        ~Joueur();
        // Méthode pour ajouter une carte à la main du joueur
        void ajouterCarte(const Carte& p_nouvelleCarte);
        int calculerScore();

    private:
        ListeChaineeCartes main;
        int m_soldeInitiale;
        int m_mise;
        int m_nombreCartes;
};

