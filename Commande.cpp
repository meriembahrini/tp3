#include <iostream>
#include <string>
#include "Commande.h"
Commande::Commande( const Client& client, const std::vector<Produit>& tabProduit , const std::string& statut)

    : _client(client), _tabProduit(tabProduit), _statut(statut){}

std::string Commande::getStatut() const {
    return _statut;

}
const std::vector<Produit>& Commande::gettabProduit() const {
    return _tabProduit;
}
Client Commande::getClientcom() const {
    return _client;
}
std::ostream& operator<<(std::ostream& os, const Commande& commande) {
    os << "Commande pour " << commande.getClientcom().getNom() << " "
       << commande.getClientcom().getPrenom() << ", Statut: " << commande.getStatut() << "\n";


    for (const auto& produit : commande.gettabProduit()) {
        os << produit << "\n";
        return os;
    }
}
