#ifndef POO_LABO4_ACTION_H
#define POO_LABO4_ACTION_H

#include "../Field.h"

/**
 * @brief Classe abstraite Action. Parente de Move, Kill, Bite, Stay. Permet l'exécution d'une action
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class Action
{
public:
    /**
    * @brief Exécute l'action
    * @param f Environnement dans lequel est appliqué l'action
    */
    virtual void execute(Field& f) = 0;
};


#endif //POO_LABO4_ACTION_H
