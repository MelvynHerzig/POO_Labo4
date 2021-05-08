#ifndef POO_LABO4_EVENT_H
#define POO_LABO4_EVENT_H

#include <functional> // function

class BuffyAndVampires;

/**
 * @brief Classe créeant un événement à appliquer sur un controllerType BuffyAndVampires.
 * @date 08/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class Event
{
private:

   using Func = std::function<void (BuffyAndVampires&)>;

   /**
    * @brief Événementà appliquer.
    */
   Func event;

public:

   /**
    * @brief Constructeur, définit l'événement à exécuter pour le controller
    *         BuffyAndVampires
    * @param event Action à effectuer
    */
   Event (Func event);

   /**
    * @brief Déclange l'action sur le contrôleur BuffyAndVampires.
    * @param controller Contrôleur où appliquer l'événement.
    */
   void trigger(BuffyAndVampires& controller) const;
};

#endif //POO_LABO4_EVENT_H
