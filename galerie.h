#ifndef GALERIE_H
#define GALERIE_H
#include "peinture.h"
#include <iostream>
#include <string>
#include <vector>
class Galerie 
{
    private :
        std::string nom_;
        std::string adresse_;
        std::vector<Peinture> peintures_;
    public:
    Galerie(std::string& nom, std::string& adresse);
    std::string getNom() const;
    std::string getAdresse() const; 
    void ajouterPeinture(const Peinture& peinture);
    void retirerPeinture(const std::string& titre);
    void exposerPeinture(const std::string& titre);
    void retirerExpositionPeinture(const std::string& titre);
    void afficherPeintures() const;
};
#endif
