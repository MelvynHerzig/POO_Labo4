#ifndef POO_LABO4_FIELD_H
#define POO_LABO4_FIELD_H

#include <list>
#include "Entities/Humanoid.h"

class Humanoid;

/**
 * @brief Classe qui représente l'environnement
 * @date 05/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class Field
{
private:
    /**
     * @brief Numero de tour correspondant à l'état du terrain
     */
    int turn;

    /**
     * @brief Liste des humanoides existants sur le terrain
     */
    std::list<Humanoid*> humanoids;

public:
    /**
     * Effetue les actions de tous les humanoids pour avancer d'un tour
     * @return nouveau numero de tour
     */
    int nextTurn();
};


#endif //POO_LABO4_FIELD_H
