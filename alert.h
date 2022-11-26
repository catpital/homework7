// alert.h
#pragma once
#include <iostream>
using namespace std;
//#include "badarray.cpp"
class BadArray
{
private:
    int _a;
   //int _b;

public:
    BadArray(int a = 0)  : _a(a) {}
    //BadArray(a) {}
        //, int b = 0) , _b(b) {}
    void Show()
    {
        std::cout << "ERROR: Bad Array result!" << endl;
        if (_a == 1)
        {
            std::cout << "Ошибка 1 - проблема при создании контейнера " << endl;
        }  
        if (_a == 2)
        {
            std::cout << "Ошибка 2 - проблема при копировании контейнера " << endl;
        }  
        if (_a == 3)
        {
            std::cout << "Ошибка 3 - такого элемента нет " << endl;
        }
        if (_a == 4)
        {
            std::cout << "Ошибка 4 - некорректный размер для изменения " << endl;
        }
        if (_a == 5)
        {
            std::cout << "Ошибка 5 - некорректный номерэлемента для вставки " << endl;
        }
        if (_a == 6)
        {
            std::cout << "Ошибка 6 - некорректный номер элемента для удаления " << endl;
        }
    }
};