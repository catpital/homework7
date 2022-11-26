//main.cpp
#include "intArray.h"
#include <cstdlib>
#include "alert.h"
//#include "badarray.cpp"
#include <climits>
using namespace std;
#include <iostream>


int main()
{
    int N=0;
    //int T;
    int oper=11;
	setlocale(LC_ALL, "");
    // BadArray bd = new bd{0,0};
    IntArray array(1);
    while (oper!=0)
    {
        
        std::cout << "Выбирете действие: " << endl;
        std::cout<<"1-создать контейнер, 2-скопировать контейнер, для выхода 0" << endl;
        std::cout << "3-получить доступ к любому элементу контейнера по индексу, 4- изменить размер контейнера," << endl;
        std::cout << "5-вставить элемент в контейнер, 6-удалить элемент из контейнера" << endl;
        std::cin >> oper;
        
        switch (oper)
           {
        case 1:
        {                        
            try
            {
                std::cout << "Введите к-во элементов" << endl;
                std::cin >> N;
                IntArray array(N); // Fill the array with numbers 1 through N
                for (int i{ 0 }; i < N; ++i)
                {
                   array[i] = i + 1;
                }
                for (int i = 0; i < N; ++i)
                {
                    std::cout << array[i] << ' ';// Print out all the numbers
                }
            }
               catch (BadArray& bd)
            {
                std::cout << " Пустой массив" << endl;
                bd.Show();
             }
                    
            std::cout << '\n';
            break;
        }
        case 5: // вставить элемент в контейнер;
        { 
            std::cout << "Введите к-во элементов" << endl;
            std::cin >> N;
            try
                {
            IntArray array(N); // Fill the array with numbers 1 through N
            for (int i{ 0 }; i < N; ++i)
            {
                array[i] = i + 1;
                // std::cout << array[i] << endl;
            }
            // std::cout << N << " size" << endl;
            for (int i = 0; i < N; ++i)
            {
                std::cout << array[i] << ' ';// Print out all the numbers
            }
            std::cout<< "\n";
            std::cout << "Введите номер элемента" << endl;
            int index=0;
            cin >> index;
            std::cout << "Введите значение" << endl;
            int value = 0;
            cin >> value;
                
            if (index < 0 || index > N-1)
            {
                std::cout << "Некоректная длина ";
                throw BadArray(1);
            }
            else
            {
                array.insertBefore(value, index);
                for (int i = 0; i < N; ++i)
                  {
                    std::cout << array[i] << ' ';// Print out all the numbers
                  }
            }
                
                } // try

            catch
                (BadArray& bd)
            {
                std::cout << " не найден элемент с таким индексом" << endl;
                bd.Show();
            }

        }  
            
            break;
           
        case 2: //скопировать контейнер;
        {
            try
            {
                std::cout << "Введите к-во элементов" << endl;
                std::cin >> N;
                IntArray array(N); // Fill the array with numbers 1 through N
                for (int i{ 0 }; i < N; ++i)
                {
                    array[i] = i + 1;
                }
                for (int i = 0; i < N; ++i)
                {
                    std::cout << array[i] << ' ';// Print out all the numbers
                }
                int* data{ new int[N] };

                if (N > 0)
                {
                    for (int index = 0; index < N; ++index)
                        data[index] = array[index];
                }
                std::cout << "\n";
                std::cout << "data "<< endl;
                for (int i = 0; i < N; ++i)
                {
                    std::cout  << data[i] << ' ';// Print out all the numbers
                }
                std::cout << "\n";
            }
            catch (BadArray& bd)
            {
                std::cout << " Ошибка копирования" << endl;
                bd.Show();
            }
                     
            break; }
        case 3: //получить доступ к любому элементу контейнера по индексу;
        {
            try 
            {
                int Nom = 0;
                std::cout << "Введите к-во элементов" << endl;
                std::cin >> N;
                IntArray array(N); // Fill the array with numbers 1 through N
                for (int i{ 0 }; i < N; ++i)
                {
                    array[i] = i + 1;
                }
                for (int i = 0; i < N; ++i)
                {
                    std::cout << array[i] << ' ';// Print out all the numbers
                }
                std::cout << " Введите нужный номер  ";
                cin >> Nom;
                if (Nom < 0 || Nom >N)
                {
                   // std::cout << "baddd";
                    throw BadArray(3);
                }
                std::cout << "\n";
                std::cout << array[Nom] << ' ';// Print out the numbers
                std::cout << "\n";

            }
            
            catch (BadArray& bd)
            {
                std::cout << " Ошибка доступа" << endl;
                bd.Show();
            }
            break; }

        case 4: // изменить размер контейнера;
        {
            try 
            {
                int Resize = 0;
                std::cout << "Введите к-во элементов" << endl;
                std::cin >> N;
                IntArray array(N); // Fill the array with numbers 1 through N
                for (int i{ 0 }; i < N; ++i)
                {
                    array[i] = i + 1;
                }
                for (int i = 0; i < N; ++i)
                {
                    std::cout << array[i] << ' ';// Print out all the numbers
                }
                std::cout << " Введите нужный размер  ";
                cin >> Resize;
                if (Resize < 0 )
                {
                   // std::cout << "baddd";
                    throw BadArray(4);
                }
                else array.resize(Resize); 
                std::cout << "\n";
                for (int i = 0; i < Resize; ++i)
                {
                    std::cout << array[i] << ' ';// Print out all the numbers
                }
                std::cout << "\n";
           }
            catch (BadArray& bd)
            {
                std::cout << " Ошибка изменения размера" << endl;
                bd.Show();
            }
            break; }
       
        case 6: //удалить элемент из контейнера.
        {
            // Remove the element with index Rem
            try
            {
                int Rem = 0;
                std::cout << "Введите к-во элементов" << endl;
                std::cin >> N;
                IntArray array(N); // Fill the array with numbers 1 through N
                for (int i{ 0 }; i < N; ++i)
                {
                    array[i] = i + 1;
                }
                for (int i = 0; i < N; ++i)
                {
                    std::cout << array[i] << ' ';// Print out all the numbers
                }
                std::cout << " Введите нужный номер элемента  ";
                cin >> Rem;
                if (Rem < 0 || Rem>N)
                {
                   std::cout << "baddd";
                    throw BadArray(6);
                }
                else array.remove(Rem);
                std::cout << "\n";
              
                for (int i = 0; i < N-1; ++i)
                {
                    std::cout << array[i] << ' ';// Print out all the numbers
                }
                std::cout << "\n";
                
            }
            catch (BadArray& bd)
            {
                std::cout << " Ошибка удаления" << endl;
                bd.Show();
            }
            break;
        }
                
        case 0:
            oper = 0;
            break;

        default:
        { std::cout << "нажмите 0, чтобы выйти" << endl;
        std::cin >> oper;
        break;
        }
          
        } //switch
    
    } //while
	   
    return 0;
}