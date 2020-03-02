// HW_16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



int main()
{
    const int Nsize = 5;
    int array[Nsize][Nsize];


    for (int i = 0; i < Nsize; i++)
    {
        for (int j = 0; j < Nsize; j++)
        {
            array[i][j] = i + j;
            std::cout << array[i][j];
        }
        std::cout << "\n";
    }


}

