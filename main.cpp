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
        
        std::cout << "�������� ��������: " << endl;
        std::cout<<"1-������� ���������, 2-����������� ���������, ��� ������ 0" << endl;
        std::cout << "3-�������� ������ � ������ �������� ���������� �� �������, 4- �������� ������ ����������," << endl;
        std::cout << "5-�������� ������� � ���������, 6-������� ������� �� ����������" << endl;
        std::cin >> oper;
        
        switch (oper)
           {
        case 1:
        {                        
            try
            {
                std::cout << "������� �-�� ���������" << endl;
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
                std::cout << " ������ ������" << endl;
                bd.Show();
             }
                    
            std::cout << '\n';
            break;
        }
        case 5: // �������� ������� � ���������;
        { 
            std::cout << "������� �-�� ���������" << endl;
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
            std::cout << "������� ����� ��������" << endl;
            int index=0;
            cin >> index;
            std::cout << "������� ��������" << endl;
            int value = 0;
            cin >> value;
                
            if (index < 0 || index > N-1)
            {
                std::cout << "����������� ����� ";
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
                std::cout << " �� ������ ������� � ����� ��������" << endl;
                bd.Show();
            }

        }  
            
            break;
           
        case 2: //����������� ���������;
        {
            try
            {
                std::cout << "������� �-�� ���������" << endl;
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
                std::cout << " ������ �����������" << endl;
                bd.Show();
            }
                     
            break; }
        case 3: //�������� ������ � ������ �������� ���������� �� �������;
        {
            try 
            {
                int Nom = 0;
                std::cout << "������� �-�� ���������" << endl;
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
                std::cout << " ������� ������ �����  ";
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
                std::cout << " ������ �������" << endl;
                bd.Show();
            }
            break; }

        case 4: // �������� ������ ����������;
        {
            try 
            {
                int Resize = 0;
                std::cout << "������� �-�� ���������" << endl;
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
                std::cout << " ������� ������ ������  ";
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
                std::cout << " ������ ��������� �������" << endl;
                bd.Show();
            }
            break; }
       
        case 6: //������� ������� �� ����������.
        {
            // Remove the element with index Rem
            try
            {
                int Rem = 0;
                std::cout << "������� �-�� ���������" << endl;
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
                std::cout << " ������� ������ ����� ��������  ";
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
                std::cout << " ������ ��������" << endl;
                bd.Show();
            }
            break;
        }
                
        case 0:
            oper = 0;
            break;

        default:
        { std::cout << "������� 0, ����� �����" << endl;
        std::cin >> oper;
        break;
        }
          
        } //switch
    
    } //while
	   
    return 0;
}