#include <chrono>
#include <ctime>
#include <iostream>

void Time::pastTime()
{ 
     auto start  = std::chrono::system_clock::now();
     \\ ждем выполнения
     auto end = std::chrono::system_clock::now();
     int delta = std::chrono::duration_cast<std::chrono::seconds>(end-start).count();
     std::cout << delta;
}

void Time::getTime()
{

    std::time_t current = std::chrono::system_clock::to_time_t(end); 
    std::cout <<  std::ctime(&current);

}
      
