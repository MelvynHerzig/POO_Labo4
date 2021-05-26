#ifndef POO_LABO4_MOVE_H
#define POO_LABO4_MOVE_H


#include "../Entities/Humanoid.h"
#include "../Entities/IKillable.h"

/**
 * @brief Classe Move héritant de Action. Permet d'effectuer l'action de se déplacer à une newPosition
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class Move : public Action
{
private:
    /**
     * @brief L'humanoïde qui doit être déplacé
     */
    Humanoid& humanoidToMove;

    /**
     * @brief Direction dans laquelle l'humanoïde doit se déplacer
     */
    Position newPosition;

public:
    Move(Humanoid& humanoid, const Position& direction);


    void execute(Field& f) override;
};


#endif //POO_LABO4_MOVE_H
