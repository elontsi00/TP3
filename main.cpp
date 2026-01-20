#include <iostream>
#include "artiste.h"
#include "peinture.h"
#include "galerie.h"
 int main() {
    std::string nomArtiste = "Doe";
    std::string prenomArtiste = "John";
    std::string nationaliteArtiste = "Americaine";
    Artiste artiste(nomArtiste, prenomArtiste, nationaliteArtiste);

    std::string titrePeinture = "Sunset";
    Peinture peinture(titrePeinture, artiste);

    std::string nomGalerie = "Galerie d'Art Moderne";
    std::string adresseGalerie = "123 Rue de l'Art";
    Galerie galerie(nomGalerie, adresseGalerie);

    galerie.ajouterPeinture(peinture);
    galerie.exposerPeinture(titrePeinture);
    galerie.afficherPeintures();

    return 0;
}