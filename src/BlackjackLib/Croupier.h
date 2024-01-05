#pragma once
#include "Joueur.h"
#include "ListeChaineeCartes.h"

template<typename T>
class Croupier : public Joueur
{
    public:
        Croupier();
        ~Croupier();
        // Méthode pour distribuer une carte au joueur ou au croupier
        void distribuerCarte(Joueur& p_joueur);
        void revelerPremiereCarte();
    private:
        ListeChaineeCartes<Carte> m_main;
};

