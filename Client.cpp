#include"Client.h"
#include<iostream>
#include<string>
#include<vector>
Client::Client(std::string id, std::string prenom, std::string nom)
    : _id(id), _prenom(prenom), _nom(nom) {}

std::string Client::getPrenom() const{
    return _prenom;
}
std::string Client::getNom() const{
    return _nom;
}
std::string Client::getId() const{
    return _id;
}
const std::vector<Produit>& Client::getPanier() const{
    return _panier;
}
void Client::ajoutPanier(const Produit& produitajoute){
    _panier.push_back(produitajoute);
}
void Client::setPanierVide() {
    _panier.clear();
}

void Client::modifquantite(const std::string& nomproduit, int nouvellequantite) {
    for (auto& produit : _panier) {
        if (produit.gettitre() == nomproduit) {
            produit.setquantitedis(nouvellequantite);
            return;
        }
    }
    std::cout << "Produit '" << nomproduit << "' non trouvé dans le panier." << std::endl;
}
void Client::supprimproduit(const std::string& nomproduit) {
    for (auto i = _panier.begin(); i != _panier.end(); ++i) {
        if (i->gettitre() == nomproduit) {
            _panier.erase(i);
            std::cout << "Produit '" << nomproduit << "' supprimé du panier." << std::endl;
        }
    }

}
std::ostream& operator<<(std::ostream& os, const Client& client) {
    os << "Client [ID: " << client._id << ", Prénom: " << client._prenom
       << ", Nom: " << client._nom << "]\nPanier d'achat :\n";

    if (client._panier.empty()) {
        os << "  Panier vide.\n";
    } else {
        for (const auto& produit : client._panier) {
            os << "  " << produit << "\n";
        }
    }
    return os;
}