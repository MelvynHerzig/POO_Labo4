#ifndef POO_LABO4_HUMANOID_H
#define POO_LABO4_HUMANOID_H


#include "../Field.h"
#include "../Actions/Action.h"
#include "HumanoidType.h"
#include "position/Position.h"
#include "../Display/AbstractDisplay.h"

class Action;
class Field;
class AbstractDisplay;

/**
 * @brief Classe abstraite Humanoid. Parente de Buffy, Vampire, Human. Défini leurs méthodes communes.
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class Humanoid
{
private:
    /**
     * @brief Humanoïde vivant ?
     */
    bool alive;


    /**
     * @brief Position de l'humanoïde
     */
    Position position;

protected:
    /**
     * @brief Action a executé
     */
    Action* action;

public:

   /**
    * @brief Constructeur, définit la position de l'humaoïde.
    * @param position Position à assigner.
    */
   explicit Humanoid(const Position& position);

    /**
     * @brief Destructeur de la classe
     */
    virtual ~Humanoid() = default;

    /**
     * @brief L'humanoïde s'affiche dans l'afficheur.
     * @param displayer Afficheur responsable d'afficher l'humanoïde.
     */
    virtual void display(const AbstractDisplay& displayer) const = 0;

    /**
     * @brief Obtient le type de l'humanoïde selon l'enum HumanoidType
     * @return Le type de l'humanoïde
     */
    virtual HumanoidType getType() const = 0;

    /**
     * @brief Defini l'action que l'humanoïde doit effectué en fonction de l'environnement
     * @param f Environnement influant sur le choix de l'action
     */
    //virtual void setAction(Field& f) = 0;

    /**
     * Execute l'action définie précédemment sur l'environnement passé en paramètre
     * @param f Environnement sur lequel effectué l'action
     */
    void executeAction(Field& f);

    /**
     * @brief Accesseur : est-ce que l'humanoïde est vivant ?
     * @return
     */
    bool isAlive() const;

    /**
     * @brief Déplace l'humanoïde à la newPosition souhaitée
     * @param newPosition Position où déplacer l'humanoïde
     */
    void move(Position& newPosition);

    /**
     * @brief Est-ce que l'humanoide est à la position (x,y) ?
     * @param x Position x.
     * @param y Position y.
     * @return Retourne vrai si la position de l'humanoïde vaut x et y
     */
    bool isAt(unsigned x, unsigned y) const;

};


#endif //POO_LABO4_HUMANOID_H
