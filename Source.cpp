#include <iostream>
#include <string>
#include "LeaverDynamic.h"
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Ваше имя: ";
    std::string s;
    std::getline(std::cin, s);
    LeaverDynamic leaver;
    std::cout << leaver.LeaveString(s);
}