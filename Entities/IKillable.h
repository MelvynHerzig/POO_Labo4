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
public:

    /**
     * @brief Tue l'instance
     */
    virtual void kill() = 0;

    /**
     * @brief Destructeur de la classe
     */
    virtual ~IKillable() = default;
};


#endif //POO_LABO4_IKILLABLE_H
