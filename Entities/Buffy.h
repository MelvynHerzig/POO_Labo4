#ifndef POO_LABO4_BUFFY_H
#define POO_LABO4_BUFFY_H

#include "Humanoid.h"

/**
 * @brief Classe qui représente l'environnement
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class Buffy : public Humanoid
{
public:

   /**
   * @brief Constructeur, définit la position de Buffy
   * @param position Position à assigner.
   */
   explicit Buffy (const Position &position);

   /**
    * @brief Buffy s'affiche dans l'afficheur.
    * @param displayer Afficheur responsable d'afficher Guffy.
    */
   void display(const AbstractDisplay &displayer) const override;

   /**
    * @brief Accesseur au type de la classe.
    * @return Retourne HumanoidType::BUFFY
    */
   HumanoidType getType() const override;

   // TODO
   //void setAction(const Field& f);
};


#endif //POO_LABO4_BUFFY_H
