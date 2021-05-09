#ifndef POO_LABO4_UTILS_H
#define POO_LABO4_UTILS_H

#include <random> // random_device

/**
 * @brief Classe utilitaire proposant des méthodes static qui n'ont pas de logique
 *        strictement associée aux autres classes.
 *        Cette classe est orientée vers l'aléatoire.
 * @date 09/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class Utils
{
private:

   /**
    * @brief Générateur d'une suite de nombres aléatoires non déterminés.
    */
   static std::random_device generator;

public:

   /**
    * @brief Annulation du constructeur.
    */
   Utils() = delete;

   /**
   * @brief Calcul une entier aléatoire entre [min, max[
   * @param min Borne inférieure
   * @param max Borne supérieure
   * @return int Retourne l'entier aléatoire.
   */
   static unsigned randint(unsigned min, unsigned max);
};

#endif //POO_LABO4_UTILS_H
