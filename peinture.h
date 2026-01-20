#ifndef PEINTURE_H
#define PEINTURE_H
#include "artiste.h"


#include <iostream>
#include <string>
class Peinture 
{
    private :
        std::string titre_;
        bool expose_=false;
        Artiste artiste_;



    public:

    Peinture(std::string& titre, Artiste& artiste);
    
    std::string getTitre() const;
    std::string getArtiste() const;
    bool getExpose() const;
    void setExpose(bool expose);
    Artiste artiste() const;

    // les methodes

        friend std::ostream& operator<<(std::ostream& os, const Peinture& peinture);
       // void exposer() const;
        //void retirer_exposition() const;
        //void savoir_si_expose() const;


};
#endif