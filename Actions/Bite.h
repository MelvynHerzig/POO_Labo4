#ifndef POO_LABO4_BITE_H
#define POO_LABO4_BITE_H


#include "Action.h"
#include "../Entities/Human.h"

/**
 * @brief Classe Bite héritant de Action. Permet d'effectuer l'action de mordre et transformer un Human en Vampire
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class Bite : public Action
{
private:
    /**
     * @brief Humain à transformer en vampire
     */
    Human& human;

public:
    /**
     * @brief Constructeur de la classe
     * @param human Humain à transformer en vampire
     */
    explicit Bite(Human& human);

    void execute(Field &f) override;

};


#endif //POO_LABO4_BITE_H
