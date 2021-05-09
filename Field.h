#ifndef POO_LABO4_FIELD_H
#define POO_LABO4_FIELD_H

#include <list>   // list
#include <vector> // vector
#include "Entities/Humanoid.h"

class Humanoid;

/**
 * @brief Classe qui représente l'environnement
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class Field
{
private:

   /**
     * @brief Numero de tour correspondant à l'état du terrain
     */
    int turn;

    /**
     * @brief Liste des humanoides existants sur le terrain
     */
    std::list<Humanoid*> humanoids;

    /**
     * @brief Taile (largeur/hauteur) de la carte de jeu.
     */
     const std::size_t SIZE;

public:

    /**
     * @brief Constructeur.
     * @param size Taille de la carte à créer (largeur = hauteur = size)
     * @param humansToCreate Nombre d'humains à positionner.
     * @param vampiresToCreate Nomre de vampires à positionner.
     */
    Field(std::size_t size, std::size_t humansToCreate, std::size_t vampiresToCreate);

    /**
     * @brief Destructeur, libère l'allocation des humanoïdes.
     */
    ~Field();

    /**
     * Effetue les actions de tous les humanoids pour avancer d'un tour
     * @return nouveau numero de tour
     */
    int nextTurn();

    /**
     * @brief Accesseur de la taille de la carte. (largeur = hauteur = taille).
     * @return Retourne la taille de la carte.
     */
    std::size_t getSize() const;

    /**
     * @brief Retourne vrai si un hamnoïde à la position (x,y)
     * @return
     */
    bool hasHumanoidAt(unsigned x, unsigned y) const;

   /**
    * @brief Accède à l'humanoïde en position (x,y).
    * @return Retourne une référence sur l'humanoïde en position (x,y).
    * @throw runtime_error Si aucun humanoïde est en position x,y.
    */
   const Humanoid& getHumanoidAt(unsigned x, unsigned y) const;

private:

   /**
    * @brief Crée un montant donnée d'humanoïdes à une position aléatoire.
    * @tparam humaoidClass Spécialisation d'humanoïde
    * @param amout Quantité à créer.
    */
   template<typename humaoidClass> void createHumanoid(std::size_t amout);
};

#include "GenericField.h"

#endif //POO_LABO4_FIELD_H
