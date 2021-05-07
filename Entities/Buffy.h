#ifndef POO_LABO4_BUFFY_H
#define POO_LABO4_BUFFY_H

#include "Humanoid.h"

/**
 * @brief Classe qui représente l'environnement
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class Buffy : Humanoid
{
    HumanoidType getType() const override;
};


#endif //POO_LABO4_BUFFY_H
