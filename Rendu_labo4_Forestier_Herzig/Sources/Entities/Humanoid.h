#ifndef POO_LABO4_HUMANOID_H
#define POO_LABO4_HUMANOID_H

#include "../Actions/Action.h"
#include "position/Position.h"
#include "../Display/AbstractDisplay.h"

class Action;

class Field;

class AbstractDisplay;

/**
 * @brief Classe abstraite Humanoid. Parente de Buffy, Vampire, Human.
 *        Défini leurs méthodes communes.
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class Humanoid
{
protected:
   /**
    * @brief Humanoïde vivant ?
    */
   bool alive;


   /**
    * @brief Position de l'humanoïde
    */
   Position position;

   /**
    * @brief Direction dans laquelle l'humanoïde se dirige
    */
   Position direction;

   /**
    * @brief Action a executé
    */
   Action* action;

   /**
   * @brief Constructeur, définit la position de l'humaoïde.
   * @param position Position à assigner.
   */
   explicit Humanoid(const Position& position);

public:

   /**
    * @brief Destructeur de la classe
    */
   virtual ~Humanoid();

   /**
    * @brief L'humanoïde s'affiche dans l'afficheur.
    * @param displayer Afficheur responsable d'afficher l'humanoïde.
    */
   virtual void display(const AbstractDisplay& displayer) const = 0;

   /**
    * @brief Defini l'action que l'humanoïde doit effectué en fonction de l'environnement
    * @param f Environnement influant sur le choix de l'action
    */
   virtual void setAction(Field& f);

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
    * @brief Déplace l'humanoïde à la position souhaitée
    * @param newPosition Direction dans laquelle déplacer l'humanoïde
    */
   void move(Position& newPosition);

   /**
    * @brief Est-ce que l'humanoide est à la position (x,y) ?
    * @param x Position x.
    * @param y Position y.
    * @return Retourne vrai si la newPosition de l'humanoïde vaut x et y
    */
   bool isAt(unsigned x, unsigned y) const;

   /**
    * @brief Récupère la position courante de l'humanoïde
    * @return Position de l'humanoïde
    */
   Position getPosition() const;

   /**
    * @brief Nombre de cases que doit se déplacer l'humanoïde
    * @return size_t Nombre de cases
    */
   virtual size_t moveDistance() const;

};

#endif //POO_LABO4_HUMANOID_H
