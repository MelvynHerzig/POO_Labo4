#ifndef POO_LABO4_FIELD_H
#define POO_LABO4_FIELD_H

#include <list>   // list
#include "Entities/position/Position.h"
#include "Entities/IKillable.h"

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

     Field(const Field& other) = delete;
     Field& operator=(const Field& other) = delete;


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
     * @brief Retourne vrai si un hamnoïde à la newPosition (x,y)
     * @return
     */
    bool hasHumanoidAt(unsigned x, unsigned y) const;

   /**
    * @brief Accède à l'humanoïde en newPosition (x,y).
    * @return Retourne une référence sur l'humanoïde en newPosition (x,y).
    * @throw runtime_error Si aucun humanoïde est en newPosition x,y.
    */
   const Humanoid& getHumanoidAt(unsigned x, unsigned y) const;

   /**
     * @brief Calcule et retournel'humanoïde d'un type donné le plus proche de position.
     * @tparam HumanoidType Type d'humanoïde à rechercher
     * @param position Position d'où rechercher l'humanoïde le plus proche.
     * @return Retourne un pointeur sur l'entité la plus proche.
     */
   template <typename humanoidClass>
   const humanoidClass* getNearestKillable(const Position& position) const;

   /**
    * @brief Crée un humanoïde à la position donnée
    * @tparam humanoidClass Type d'humanoïde
    * @param position Position de l'humanoïde à créer
    */
   template <typename humanoidClass>
   void createHumanoid(const Position& position);


private:

   /**
    * @brief Crée un montant donnée d'humanoïdes à une newPosition aléatoire.
    * @tparam humanoidClass Spécialisation d'humanoïde
    * @param amout Quantité à créer.
    */
   template<typename humanoidClass> void createHumanoids(std::size_t amout);
};

#include "GenericField.h"

#endif //POO_LABO4_FIELD_H
