#ifndef POO_LABO4_BUFFYANDVAMPIRES_H
#define POO_LABO4_BUFFYANDVAMPIRES_H

#include "Field.h"
#include "Display/AbstractDisplay.h"

/**
 * @brief Classe type contrôleur, gère l'exécution de Buffy contre les vampires.
 * @date 08/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class BuffyAndVampires
{
private:

   /**
    * @brief Nombre de simultation à exécuter en mode statistique.
    */
   static const int NB_SIMULATIONS = 10000;

   /**
    * @brief Afficheur.
    */
   const AbstractDisplay& display;

   /**
    * @brief Taille de la carte.
    */
   const size_t SIZE;

   /**
    * @brief Quantité d'humain a générer.
    */
   const size_t HUMANS_TO_CREATE;

   /**
    * @brief Quantité de vampires a générer.
    */
   const size_t VAMPIRES_TO_CREATE;

   /**
    * @brief Terrain de la simulation en cour.
    */
   Field field;

public:

   /**
    * @brief Constructeur.
    * @param display Classe chargée de l'affichage
    * @param size Taille de la carte.
    * @param humansToCreate Nombre d'humains à créer.
    * @param vampiresToCreate Nombre de vampires à créer.
    */
   BuffyAndVampires(const AbstractDisplay& display, size_t size, size_t humansToCreate, size_t vampiresToCreate);

   /**
    * @brief Avance la simulation d'un tour.
    */
   void nextTurn();

   /**
    * @brief Effectue 10'000 simultations et affiche le % de victoire.
    */
   void statistics();

   /**
    * @brief Termine l'application
    */
   void quit();

   // TODO replacer au bon endroit fonction de test.
   void printState();
};


#endif //POO_LABO4_BUFFYANDVAMPIRES_H
