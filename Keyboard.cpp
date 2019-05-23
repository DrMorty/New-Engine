#include <iostream>

std::cin >> key;

void Keyboard::ifKeyPressed(key)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::key )) // нужны сделать if , elif, 
                                      //только скажи какие действия на какие клавиши. можно ещё считать действия из eventmanager, если надо
  {
      return True;
  }
}
