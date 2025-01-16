#include <string>
#include <vector>
#include"Client.h"
class Magasin {

public:
    Magasin ();

    const std::vector<Produit>& gettabProduit() const;
    const std::vector<Client>& gettabClient() const;
    const std::vector<std::string>& gettabCommande() const;


    void ajoutClient(const Client& client);
    void ajoutCommande(const std::string& commande);
    void ajoutProduit(const Produit& produit);

    void afficherProduit() const;
    void afficherProduitparnom(const std::string& nom) const;
    void miseajourparnom(const std::string& nom, int nouvellequantite);

    void afficherClient() const;
    void afficherClientparnom(const std::string& nom) const;
    void ajoutProduitPanier(const Produit& produit,Client& client);
    void modifpanier(const Produit& produit,Client& client);
private:
    std::vector<Produit> _tabProduit;
    std::vector<Client> _tabClient;
    std::vector<std::string> _tabCommande;
};

