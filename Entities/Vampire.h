#ifndef POO_LABO4_VAMPIRE_H
#define POO_LABO4_VAMPIRE_H

#include "Humanoid.h"
#include "IKillable.h"

/**
 * @brief Classe qui représente les vampires
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
    * @brief Defini l'action que l'humanoïde doit effectué en fonction de l'environnement
    * @param f Environnement influant sur le choix de l'action
    */
   void setAction(Field& f) override;

   /**
     * @brief Tue l'instance
     */
   void kill() override;
};


#endif //POO_LABO4_VAMPIRE_H
