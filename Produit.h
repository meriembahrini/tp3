#include <string>
#include <iostream>

class Produit {
public:
    Produit (std::string titre, std::string description, int quantitedis, double prix );
    std::string gettitre() const;
    std::string getdescription() const;
    int getquantitedis() const;
    double getprix() const;

    void setquantitedis(int nouvellequantite);
    friend std::ostream& operator<<(std::ostream& os, const Produit& produit);

private:

    std::string _titre;
    std::string _description;
    int _quantitedis;
    double _prix;
};






