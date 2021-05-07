#ifndef POO_LABO4_STAY_H
#define POO_LABO4_STAY_H


#include "Action.h"

/**
 * @brief Classe Move héritant de Action. Permet d'effectuer l'action rester sur place
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class Stay : public Action
{
public:
    void execute(Field &f) override;
};


#endif //POO_LABO4_STAY_H
