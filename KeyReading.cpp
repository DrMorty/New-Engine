#include <iostream>
//в комментах написано на общий случай с получением из eventmanager ивентов всех.
//auto Key = getEvent ->event.manager


void Reading(); //Reading(key)
{ //если нужно что
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) //if isKeyPressed(key)==isKeyPressed(sf::Keyboard::Q)) 
    {                                                // return True
        std::cout<<"клавиша Q";
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        std::cout<<"клавиша W";
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
    {
        std::cout<<"клавиша E";
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
    {
        std::cout<<"клавиша E";
    }
}
