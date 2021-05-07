#ifndef POO_LABO4_ABSTRACTDISPLAY_H
#define POO_LABO4_ABSTRACTDISPLAY_H

#include <string> // string

// Pré-déclaration.
class Field;
class Human;
class Vampire;
class Buffy;

/**
 * @brief Classe abstraite définissant les méthodes à implémenter pour les
 *        différent types de display.
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class AbstractDisplay
{
private:
   // Bords
   static const char CORNER = '+';
   static const char TOP_BOT_BORDER = '-';
   static const char LFT_RGT_BORDER = '|';
   static const char EMPTY = ' ';

protected:
   // Humanoïdes
   static const char BUFFY = 'B';
   static const char HUMAN = 'h';
   static const char VAMPIRE = 'v';

public:

   /**
    * @brief Destructeur.
    */
   virtual ~AbstractDisplay() = default;

   /**
   * @brief Affiche un message
   * @param message Message à afficher
   */
   virtual void display(const std::string& message);

   /**
    * @brief Affiche la carte.
    * @param field Carte à afficher.
    */
   virtual void display(const Field& field) const;

   /**
    * @brief Affiche un vampire
    * @param vampire Vampire. Sert à la surcharge.
    */
   virtual void display(const Vampire& vampire) const = 0;

   /**
    * @brief Affiche un humain
    * @param human Humain, sert à la surchage.
    */
   virtual void display(const Human& human) const = 0;

   /**
    * @brief Affiche un chasseur
    * @param hunter Buffy. Sert à la surchage.
    */
   virtual void display(const Buffy& buffy) const = 0;

   /**
    * @brief Nettoie l'affichage.
    */
   virtual void clear() const = 0;

private:

   /**
    * @brief Affiche les bord supérieurs et inférieurs d'une carte.
    * @param field Carte à afficher.
    */
   static void displayTopBotBorder(const Field& field) ;
};

#endif //POO_LABO4_ABSTRACTDISPLAY_H
