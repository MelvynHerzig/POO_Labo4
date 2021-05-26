#ifndef POO_LABO4_HUMAN_H
#define POO_LABO4_HUMAN_H


#include "Humanoid.h"
#include "IKillable.h"
#include "Vampire.h"

class Human : public Humanoid, public IKillable
{
public:

   /**
   * @brief Constructeur, définit la newPosition de l'humain
   * @param position Position à assigner.
   */
   explicit Human (const Position &position);

   /**
    * @brief L'humain' s'affiche dans l'afficheur.
    * @param displayer Afficheur responsable d'afficher l'humain.
    */
   void display(const AbstractDisplay &displayer) const override;

   /**
    * @brief Accède au type de la classe.
    * @return Retourne HumanoidType::HUMAN
    */
   HumanoidType getType () const override;

   /**
    * @brief Transforme l'humain en vampire
    *        Concrètement, tue l'humain et ajoute un nouveau vampire dans Field
    * @param f Environnement dans lequel ajouter le vampire
    */
   void transformToVampire (Field &f);

   void kill() override;

};


#endif //POO_LABO4_HUMAN_H
