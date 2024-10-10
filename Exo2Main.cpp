#include <iostream>
#include "EntityExo2.h"

int main()
{
    EntityExo2 entity(10, 20);

    // Affichage de la position actuelle
    Vector2 pos = entity.getPosition();
    std::cout << "Position initiale: " << pos.getValueX() << ", " << pos.getValueY() << std::endl;

    // Modification de la nouvelle position
    entity.setPosition(Vector2(30, 40));

    // Affichage de la nouvelle position
    pos = entity.getPosition();
    std::cout << "Nouvelle position: " << pos.getValueX() << ", " << pos.getValueY() << std::endl;

    return 0;
}