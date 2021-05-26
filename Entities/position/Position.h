#ifndef POO_LABO4_POSITION_H
#define POO_LABO4_POSITION_H

/**
 * @brief Classe représentant la direction des entités.
 *        Une direction est exprimée en nombres entiers positifs avec une direction x
 *        sur l'axe horizontal et y sur l'axe vertical.
 * @date 09/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class Position
{
private:

   /**
    * @brief Position sur l'axe horizontal.
    */
   int x;

   /**
    * @brief Position sur l'axe vertical.
    */
   int y;

public:
   /**
     * @brief Constructeur. Définit la direction.
     * @param x Position horizontale
     * @param y Position verticale
     */
   Position(int x, int y);

   /**
     * @brief Accesseur direction horizontale.
     * @return Retourne la direction horizontale.
     */
   int getX() const;

   /**
    * @brief Accesseur direction verticale.
    * @return Retourne la direction verticale.
    */
   int getY() const;

   /**
    * @brief Calcule la distance entre deux positions p1 et p2.
    * @param p1 Première position
    * @param p2 Deuxième position
    * @return Retourne la distance entre les deux positions.
    */
   static double getDistanceBetween(const Position& p1, const Position& p2);
};

#endif //POO_LABO4_POSITION_H
