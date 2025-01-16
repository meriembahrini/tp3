#include<iostream>
#include <string>
#include "Produit.h"

Produit::Produit(std::string titre, std::string description, int quantitedis, double prix)
    : _titre(titre), _description(description), _quantitedis(quantitedis), _prix(prix) {}
std::string Produit::gettitre() const{
    return _titre;
}
std::string Produit::getdescription() const{
    return _description;
}
int Produit::getquantitedis() const{
    return _quantitedis;
}
double Produit::getprix() const{
    return _prix;
}
std::ostream& operator<<(std::ostream& os, const Produit& produit) {
    os << "Titre: " << produit._titre
         << ", Description: " << produit._description
         << ", Quantité diponible: " << produit._quantitedis
         << ", Prix: " << produit._prix << "€";
    return os;
}

void Produit::setquantitedis(int nouvellequantite){
    _quantitedis = nouvellequantite;
}

