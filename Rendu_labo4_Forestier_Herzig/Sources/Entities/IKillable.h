#ifndef POO_LABO4_IKILLABLE_H
#define POO_LABO4_IKILLABLE_H

/**
 * @brief Interface abstraite IKillable. Permet à un objet implémentant l'interface de se faire tuer
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class IKillable
{
protected:
   /**
    * @brief constructeur.
    */
   IKillable() = default;
public:

   /**
    * @brief Destructeur de la classe
    */
   virtual ~IKillable() = default;

    /**
     * @brief Tue l'instance
     */
    virtual void kill() = 0;
};


#endif //POO_LABO4_IKILLABLE_H
