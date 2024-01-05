#pragma once
#include "Carte.h"

template<typename T>
struct Noeud {

    public:
        Noeud() :suivant(nullptr)
        {
        }
    private:
        Carte carte;
        Noeud* suivant;
};

template<typename T>
class ListeChaineeCartes
{
    public:
        void AjouterDebut(Noeud<T>* p_nouveauNoeud);
        void AjouterFin(Noeud<T>* p_nouveauNoeud);
        void AjouterAIndice(Noeud<T>* p_nouveauNoeud, const int& p_indice);
        void supprimerDebut();
        void supprimerFin();
        void supprimerAIndice();
        void vider();
        int nombreElements() const;
        ListeChaineeCartes& operator=(ListeChaineeCartes&& p_listeADeplacer);
        void parcourir(void (*p_fonction)(const T&));
        ListeChaineeCartes();
        ListeChaineeCartes(const ListeChaineeCartes<T>& p_listeACopier);
        ListeChaineeCartes(ListeChaineeCartes<T>&& p_listeADeplacer);
        ~ListeChaineeCartes();
    private:

        Noeud* m_tete;
        Noeud* m_queue;
        int m_nombreElement;
};

