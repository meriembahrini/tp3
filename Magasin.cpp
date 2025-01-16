#include "Magasin.h"
#include <string>
#include <iostream>
Magasin::Magasin() = default;

const std::vector<Produit>& Magasin::gettabProduit() const{
    return _tabProduit;
}
const std::vector<Client>& Magasin::gettabClient() const{
    return _tabClient;
}
const std::vector<std::string>& Magasin::gettabCommande() const{
    return _tabCommande;
}
void Magasin::ajoutProduit(const Produit& produit){
    _tabProduit.push_back(produit);
}
void Magasin::ajoutClient(const Client& client){
    _tabClient.push_back(client);
}
void Magasin::ajoutCommande(const std::string& commande){
    _tabCommande.push_back(commande);
}
void Magasin::afficherProduit() const {
    for (const auto& a : _tabProduit) {
        std::cout<<a<<std::endl;
    }
}

void Magasin::afficherClient() const {
    for (const auto& a : _tabClient) {
        std::cout<<a<<std::endl;
    }
}
void Magasin::afficherClientparnom(const std::string& nom) const {
    for (const auto& b : _tabClient) {
        if (b.getNom() == nom) {
            std::cout << b << std::endl;
            return;
        }
    }
}
void Magasin::afficherProduitparnom(const std::string& nom) const {
    for (const auto& b : _tabProduit) {
        if (b.gettitre() == nom) {
            std::cout << b << std::endl;
            return;
        }
    }
}

void Magasin::miseajourparnom(const std::string& nom,int nouvellequantite) {
    for ( auto& b : _tabProduit) {
        if (b.gettitre() == nom) {
            b.setquantitedis(nouvellequantite);
            std::cout << "Quantité du produit '" << nom << "' mise à jour à " << nouvellequantite << std::endl;
            return;
        }
    }
    std::cout << "Produit non trouvé ";
}
void Magasin::ajoutProduitPanier(const Produit& produit,Client& client) {
    client.ajoutPanier(produit);
}
void modifpanier(const Produit& produit, Client& client, int k) {
    std::string nom = produit.gettitre();
    client.modifquantite(nom,k);
}

