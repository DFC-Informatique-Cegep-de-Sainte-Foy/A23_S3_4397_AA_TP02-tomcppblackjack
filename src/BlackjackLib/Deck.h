#pragma once
#include "ListeChaineeCartes.h"
#include "Carte.h"

template<typename T>
class Deck
{
    public:
        Deck();
        ~Deck();
        void MelangerCartes();
        Carte DistribuerCarte();
        void AjouterCarte(const ListeChaineeCartes& p_carteAAjouter);
    private:
        ListeChaineeCartes m_Deck;
};

