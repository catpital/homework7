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
            std::cout << "������ 1 - �������� ��� �������� ���������� " << endl;
        }  
        if (_a == 2)
        {
            std::cout << "������ 2 - �������� ��� ����������� ���������� " << endl;
        }  
        if (_a == 3)
        {
            std::cout << "������ 3 - ������ �������� ��� " << endl;
        }
        if (_a == 4)
        {
            std::cout << "������ 4 - ������������ ������ ��� ��������� " << endl;
        }
        if (_a == 5)
        {
            std::cout << "������ 5 - ������������ ������������� ��� ������� " << endl;
        }
        if (_a == 6)
        {
            std::cout << "������ 6 - ������������ ����� �������� ��� �������� " << endl;
        }
    }
};