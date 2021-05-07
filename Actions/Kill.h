#ifndef POO_LABO4_KILL_H
#define POO_LABO4_KILL_H


#include "../Entities/IKillable.h"
#include "Action.h"

/**
 * @brief Classe Kill héritant de Action. Permet d'effectuer l'action de tuer un objet IKillable
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class Kill : public Action
{
private:
    /**
     * @brief Cible à tuer
     */
    IKillable& target;
public:
    /**
     * @brief Constructeur de la classe
     * @param target Cible à tuer
     */
    explicit Kill(IKillable& target);

    void execute(Field &f) override;
};


#endif //POO_LABO4_KILL_H
