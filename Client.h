#include"Produit.h"
#include <vector>
#include <string>
class Client {
public:
    Client(std::string id, std::string prenom, std::string nom);
    std::string getPrenom() const;
    std::string getNom() const;
    std::string getId() const;
    const std::vector<Produit>& getPanier() const;
    void ajoutPanier(const Produit& produitajoute);
    void setPanierVide( );
    void modifquantite(const std::string& nomproduit, int nouvellequantite);
    void supprimproduit(const std::string& nomproduit);
    friend std::ostream& operator<<(std::ostream& os, const Client& clientt);


private:
    std::string _prenom;
    std::string _nom;
    std::string _id;
    std::vector<Produit> _panier;

};

