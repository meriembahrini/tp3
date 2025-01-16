#include <iostream>
#include <string>
#include <vector>
#include "Client.h"

int main() {
    // Création des produits
    Produit p1("iPhone", "Téléphone Apple", 10, 999.99);
    Produit p2("iPad", "Tablette Apple", 5, 499.99);
    Produit p3("MacBook", "Ordinateur portable Apple", 3, 1299.99);

    // Création d'un client
    Client client1("C123", "Dominique", "Ginhac");

    // Affichage des informations du client
    std::cout << "Client créé : \n" << client1 << std::endl;

    // Ajout de produits au panier
    client1.ajoutPanier(p1);
    client1.ajoutPanier(p2);
    client1.ajoutPanier(p3);

    // Affichage du panier du client après ajout
    std::cout << "Panier après ajout de produits : \n" << client1 << std::endl;

    // Modification de la quantité d'un produit dans le panier
    client1.modifquantite("iPhone", 8);

    // Affichage du panier après modification
    std::cout << "Panier après modification de la quantité de l'iPhone : \n" << client1 << std::endl;

    // Suppression d'un produit du panier
    client1.supprimproduit("iPad");

    // Affichage du panier après suppression
    std::cout << "Panier après suppression de l'iPad : \n" << client1 << std::endl;

    // Vider le panier
    client1.setPanierVide();
    std::cout << "Panier après vidage : \n" << client1 << std::endl;

    return 0;
}
