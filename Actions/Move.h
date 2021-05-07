#ifndef POO_LABO4_MOVE_H
#define POO_LABO4_MOVE_H


#include "../Entities/Humanoid.h"
#include "../Entities/IKillable.h"

/**
 * @brief Classe Move héritant de Action. Permet d'effectuer l'action de se déplacer à une position
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
     * @brief La position a laquelle l'humanoïde doit être déplacé
     */
    Position position;

public:
    /**
     * @brief Constructeur de la classe
     * @param humanoid Humanoïde sur lequel effectué le mouvement
     */
    explicit Move(Humanoid& humanoid);

    /**
     * @brief Crée une position à une certaine distance de l'humanoïde à déplacer
     */
    void createRandomMove();

    /**
     * @brief Crée une position dans la direction de la cible, à une certaine distance de l'humanoïde à déplacer
     * @param target Cible a traquer
     */
    void createDirectedMove(IKillable& target);

    void execute(Field& f) override;
};


#endif //POO_LABO4_MOVE_H
