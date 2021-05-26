#ifndef POO_LABO4_BUFFY_H
#define POO_LABO4_BUFFY_H

#include "Humanoid.h"

/**
 * @brief Classe qui représente Buffy
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class Buffy : public Humanoid
{
public:

   /**
   * @brief Constructeur, définit la newPosition de Buffy
   * @param position Position à assigner.
   */
   explicit Buffy(const Position& position);

   /**
    * @brief Buffy s'affiche dans l'afficheur.
    * @param displayer Afficheur responsable d'afficher Guffy.
    */
   void display(const AbstractDisplay& displayer) const override;

   /**
   * @brief Defini l'action que l'humanoïde doit effectué en fonction de l'environnement
   * @param f Environnement influant sur le choix de l'action
   */
   void setAction(Field& f) override;

   /**
    * @brief Nombre de cases que doit se déplacer l'humanoïde
    * @return size_t Nombre de cases
    */
   size_t moveDistance() const override;
};


#endif //POO_LABO4_BUFFY_H
