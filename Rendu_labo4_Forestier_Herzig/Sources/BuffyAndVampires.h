#ifndef POO_LABO4_BUFFYANDVAMPIRES_H
#define POO_LABO4_BUFFYANDVAMPIRES_H

#include "Field.h"
#include "Display/AbstractDisplay.h"
#include "Input/KeyListener.h"

/**
 * @brief Classe type contrôleur, gère l'exécution de Buffy contre les vampires.
 * @date 08/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class BuffyAndVampires
{
private:

    friend Event KeyListener::getNextInput(size_t currentTurn);

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
   const size_t size;

   /**
    * @brief Quantité d'humain a générer.
    */
   const size_t humansToCreate;

   /**
    * @brief Quantité de vampires a générer.
    */
   const size_t vampiresToCreate;

   /**
    * @brief Terrain de la simulation en cour.
    */
   Field field;

   /**
    * @brief Gère l'input utilisateur
    */
    KeyListener listener;

    /**
     * @brief Numéro de tour actuel du Field
     */
    int noTurn;

    /**
     * @brief Est-ce que l'application doit se terminer.
     */
    bool exit;

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
    * @brief Lance la simulation
    */
   void run();

private:

    /**
     * @brief Effectue le prochain tour du terrain
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

    /**
     * @brief Affiche l'état du Field principal
     */
    void printState();
};


#endif //POO_LABO4_BUFFYANDVAMPIRES_H
