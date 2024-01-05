#pragma once
#include"ListeChaineeCartes.h"

template<typename T>
class Joueur
{

    public:
        Joueur();
        ~Joueur();
        // Méthode pour ajouter une carte à la main du joueur
        void hit(const Carte& p_nouvelleCarte);
        bool estBuste();
        int calculerScore();
        bool verifierSiBlackjack();
        void perdrePartie();
        void gagnerPartie();
        bool estPartieNulle();

        void resetMise();
        void placerMiseInitiale();
        void gagnerMise();
        void gagneMiseBlackjack();
        int obtenirSolde() const;
        bool verifierSolde() const;
        void viderMain();
        ListeChaineeCartes<Carte>& obtenirMain();

    private:
        ListeChaineeCartes<Carte> m_main;
        int m_soldeInitiale;
        int m_mise;
        int m_nombreCartes;
};

