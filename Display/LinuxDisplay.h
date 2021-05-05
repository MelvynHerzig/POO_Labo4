#ifndef POO_LABO4_LINUXDISPLAY_H
#define POO_LABO4_LINUXDISPLAY_H

#include "StandardDisplay.h"

/**
 * @brief Affichage utilisé pour Linux.
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class LinuxDisplay : public StandardDisplay
{
private:
   /**
    * @brief Couleur de buffy.
    */
   static const std::string BUFFY_COLOR;

   /**
    * @brief Couleur des humain.
    */
   static const std::string HUMAN_COLOR;

   /**
    * @brief Couleur des vampires.
    */
   static const std::string VAMPIRE_COLOR;

   /**
    * @brief Enlève les styles.
    */
   static void unsetStyle();

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


#endif //POO_LABO4_LINUXDISPLAY_H
