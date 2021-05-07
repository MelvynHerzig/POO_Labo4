#ifndef POO_LABO4_VAMPIRE_H
#define POO_LABO4_VAMPIRE_H

#include "Humanoid.h"
#include "IKillable.h"

/**
 * @brief Classe qui représente l'environnement
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class Vampire : Humanoid, IKillable
{
    HumanoidType getType() const override;

    void setAction(const Field& f);
};


#endif //POO_LABO4_VAMPIRE_H
