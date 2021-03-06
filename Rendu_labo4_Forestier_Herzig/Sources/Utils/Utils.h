#ifndef POO_LABO4_UTILS_H
#define POO_LABO4_UTILS_H

#include <random> // random_device
#include "../Entities/position/Position.h" // Position

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
    * @brief Permet d'initialiser le seeding une fois.
    */
   static bool init;

public:

   /**
    * @brief Annulation du constructeur.
    */
   Utils() = delete;

   /**
   * @brief Calcule une entier aléatoire entre [min, max[
   * @param min Borne inférieure
   * @param max Borne supérieure
   * @return int Retourne l'entier aléatoire.
   */
   static int randomInteger(int min, int max);

   /**
    * @brief Calcule une position aléatoire sur le terrain
    * @param size Taille du terrain au créer une position aléatoire.
    * @return Position aléatoire sur le terrain
    */
   static Position randomPosition(int size);
};

#endif //POO_LABO4_UTILS_H
