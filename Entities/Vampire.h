#ifndef POO_LABO4_VAMPIRE_H
#define POO_LABO4_VAMPIRE_H

#include "Humanoid.h"
#include "IKillable.h"

/**
 * @brief Classe qui représente l'environnement
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class Vampire : public IKillable, public Humanoid
{
public:
   /**
    * @brief Constructeur, définit la newPosition du vampire
    * @param position Position à assigner.
    */
   explicit Vampire(const Position& position);

   /**
    * @brief Le vampire s'affiche dans l'afficheur.
    * @param displayer Afficheur responsable d'afficher le vampire.
    */
   void display(const AbstractDisplay& displayer) const override;

   /**
   * @brief Accesseur au type de la classe.
   * @return Retourne HumanoidType::VAMPIRE
   */
   HumanoidType getType() const override;


   void setAction(Field& f);

   void kill() override;
};


#endif //POO_LABO4_VAMPIRE_H
