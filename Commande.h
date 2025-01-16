#include"Client.h"
#include <vector>
#include <string>
class Commande {
public:
    Commande(const Client& client, const std::vector<Produit>& tabProduit , const std::string& statut);
    std::string getStatut() const;
    const std::vector<Produit>& gettabProduit() const;
    Client getClientcom() const;
    friend std::ostream& operator<<(std::ostream& os, const Commande& commande);


private:
    Client _client;
    std::string _statut;
    std::vector<Produit> _tabProduit;
};