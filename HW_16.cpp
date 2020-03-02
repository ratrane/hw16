// HW_16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    const int Nsize = 5; // Size of array
    int array[Nsize][Nsize]; 


    for (int i = 0; i < Nsize; i++)
    {
        std::cout << "String "<< i<<" : ";

        for (int j = 0; j < Nsize; j++)
        {
            array[i][j] = i + j;
            std::cout <<  array[i][j] << " "; //Filling array
        }
        std::cout << "\n";
    }

    int Date;

    std::cout << "\n" << "Enter current date: ";
    std::cin >> Date;
    int StringNumber = Date % Nsize; //Division of date and array size

    int Sum = 0; //Entering integer for counting sum in array
    
    for (int String = 0; String < Nsize; String++)
    {
        Sum = Sum + array[StringNumber][String];
    }

    std::cout <<"\n" << "Sum of string " <<StringNumber <<" = " <<Sum<< "\n"; //Output result of string
}

