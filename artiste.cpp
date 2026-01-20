#include "Artiste.h"
#include <iostream>

Artiste::Artiste(std::string& nom,std::string& prenom,std::string& nationalite)
    : nom_(nom), prenom_(prenom), nationalite_(nationalite) {}


    std::string Artiste::getNom() const 
    {
         return nom_; 
    }
     std::string Artiste::getPrenom() const 
    {
         return prenom_; 
    }
     std::string Artiste::getNationalite() const 
    {
         return nationalite_; 
    }
 std::ostream& operator<<(std::ostream& os, const Artiste& artiste) {
    os << "Artiste: " << artiste.getPrenom() << " " << artiste.getNom() << " de nationalite : " << artiste.getNationalite() << " ";
    return os;
}