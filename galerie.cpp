#include "galerie.h"
#include "artiste.h"
Galerie::Galerie(std::string& nom, std::string& adresse)
    : nom_(nom), adresse_(adresse) {}
std::string Galerie::getNom() const
{
    return nom_;
}
std::string Galerie::getAdresse() const
{
    return adresse_;
}
void Galerie::ajouterPeinture(const Peinture& peinture)
{
    peintures_.push_back(peinture);
}

/*void Galerie::retirerPeinture(const std::string& titre)
{

}*/
void Galerie::exposerPeinture(const std::string& titre)
{
    for (auto& peinture : peintures_) {
        if (peinture.getTitre() == titre) {
            peinture.setExpose(true);
            peinture.getExpose();
            return;
        }
    }
}
void Galerie::retirerExpositionPeinture(const std::string& titre)
{
    for (auto& peinture : peintures_) {
        if (peinture.getTitre() == titre) {
            peinture.setExpose(false);
            std::cout << "La peinture \"" << peinture.getTitre() << "\" a été retirée de l'exposition." << std::endl;
            return;
        }
    }
}
void Galerie::afficherPeintures() const
{
    for (const auto& peinture : peintures_) {
        std::cout << peinture << " " << peinture.artiste() << std::endl;
        // std::cout << "Titre: " << peinture.getTitre()
        //           << ", Artiste: " << peinture.getArtiste()
        //           << ", Exposee: " << (peinture.getExpose() ? "Oui" : "Non") << std::endl;
    }
}
