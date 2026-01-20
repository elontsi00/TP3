#include "peinture.h"
Peinture::Peinture(std::string& titre, Artiste& artiste)
    : titre_(titre), artiste_(artiste) {}
    std::string Peinture::getTitre() const 
    {
         return titre_; 
    }
     std::string Peinture::getArtiste() const 
    {
         return artiste_.getPrenom() + " " + artiste_.getNom() + " " + artiste_.getNationalite() + "";
    }
    
     Artiste Peinture::artiste() const 
    {
         return artiste_;
    }
     bool Peinture::getExpose() const 
    {
         return expose_; 
    }
     void Peinture::setExpose(bool expose) 
    {
         expose_ = expose; 
    }
     std::ostream& operator<<(std::ostream& os, const Peinture& peinture) {
        os << "Titre Peinture: " << peinture.getTitre() << ", Exposee: " << (peinture.getExpose() ? "Oui" : "Non");
        return os;
    }
    