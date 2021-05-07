#ifndef POO_LABO4_HUMAN_H
#define POO_LABO4_HUMAN_H


#include "Humanoid.h"
#include "IKillable.h"
#include "Vampire.h"

class Human : public Humanoid, public IKillable
{
public:
    HumanoidType getType() const override;

    void setAction(const Field& f);

    /**
     * @brief Transforme l'humain en vampire
     *        Concrètement, tue l'humain et ajoute un nouveau vampire dans Field
     * @param f Environnement dans lequel ajouter le vampire
     */
    void transformToVampire(Field& f);
};


#endif //POO_LABO4_HUMAN_H
