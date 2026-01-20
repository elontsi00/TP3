#ifndef ARTISTE_H
#define ARTISTE_H

#include <iostream>
#include <string>
class Artiste 
{


    private :
        std::string nom_;
        std::string prenom_;
        std::string nationalite_;


    public:

    Artiste(std::string& nom,std::string& prenom,std::string& nationalite);
    
    std::string getNom() const;
    std::string getPrenom() const;
    std::string getNationalite() const;
    // les methodes

    friend std::ostream& operator<<(std::ostream& os, const Artiste& artiste);
};
#endif