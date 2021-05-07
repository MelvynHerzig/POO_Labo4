#ifndef POO_LABO4_STANDARDDISPLAY_H
#define POO_LABO4_STANDARDDISPLAY_H

#include "AbstractDisplay.h"

/**
 * @brief Affichage de base, utilisé si pas linux ni windows.
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class StandardDisplay : public AbstractDisplay
{
public:
   /**
    * @brief Affiche un vampire
    * @param vampire Vampire. Sert à la surcharge.
    */
   void display(const Vampire& vampire) const override;

   /**
    * @brief Affiche un humain
    * @param human Humain, sert à la surchage.
    */
   void display(const Human& human) const override;

   /**
    * @brief Affiche un chasseur
    * @param hunter Buffy. Sert à la surchage.
    */
   void display(const Buffy& buffy) const override;

   /**
    * @brief Nettoie l'affichage.
    *        (Dans un affichage classique, sans effet).
    */
   void clear() const override;
};

#endif //POO_LABO4_STANDARDDISPLAY_H
