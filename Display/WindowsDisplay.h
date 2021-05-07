#ifndef POO_LABO4_WINDOWSDISPLAY_H
#define POO_LABO4_WINDOWSDISPLAY_H

#include <windows.h> // WORD

#include "StandardDisplay.h"

/**
 * @brief Affichage utilisé pour Windows.
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class WindowsDisplay : public StandardDisplay
{
private:
   /**
    * @brief Couleur de buffy.
    */
   static const WORD BUFFY_COLOR = 0x0E;

   /**
    * @brief Couleur des humain.
    */
   static const WORD HUMAN_COLOR = 0x0D;

   /**
    * @brief Couleur des vampires.
    */
   static const WORD VAMPIRE_COLOR = 0x01;

   /**
    * @param Color Définit la couleur de l'affichage.
    */
   static void changeColor(WORD color);

   /**
    * @brief Accède à la couleur actuelle.
    * @return Retourne la couleur actuelle.
    */
   static WORD getColor();

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


#endif //POO_LABO4_WINDOWSDISPLAY_H
