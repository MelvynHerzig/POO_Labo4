#ifndef POO_LABO4_POSITION_H
#define POO_LABO4_POSITION_H

/**
 * @brief Classe représentant la position des entités.
 *        Une position est exprimée en nombres entiers positifs avec une position x
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
   unsigned x;

   /**
    * @brief Position sur l'axe vertical.
    */
   unsigned y;

public:
   /**
     * @brief Constructeur. Définit la position.
     * @param x Position horizontale
     * @param y Position verticale
     */
   Position(unsigned x, unsigned y);

   /**
     * @brief Accesseur position horizontale.
     * @return Retourne la position horizontale.
     */
   unsigned getX() const;

   /**
    * @brief Accesseur position verticale.
    * @return Retourne la position verticale.
    */
   unsigned getY() const;
};


#endif //POO_LABO4_POSITION_H
