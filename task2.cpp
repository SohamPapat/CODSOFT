/*
Task 02

Simple Calculator Using C++ Programming
Name- Soham Papat

*/
#include <iostream>
#include <bits/stdc++.h>

int main()
{
    using namespace std;
    while (1)
    {
        cout << "Welcome to Simple Calculator (Task_02)" << endl;

        double number_01, number_02, Final_Answer;
        char operater;

        cout << "Enter the first number: " << endl;
        cin >> number_01;
        cout << "Enter the second number: " << endl;
        cin >> number_02;
        cout << "Choose an operation (+, -, *, /): " << endl;
        cin >> operater;

        if (operater == 43)
        {
            Final_Answer = number_01 + number_02;
            std::cout << "Result: " << Final_Answer << endl;
            cout << "------------******-----------" << endl;
        }
        else if (operater == 45)
        {
            Final_Answer = number_01 - number_02;
            cout << "Final_Answer: " << Final_Answer << endl;
            cout << "------------******-----------" << endl;
        }
        else if (operater == 42)
        {
            Final_Answer = number_01 * number_02;
            cout << "Final_Answer: " << Final_Answer << endl;

            cout << "------------******-----------" << endl;
        }
        else if (operater == 47)
        {
            if (number_02 != 0)
            {
                Final_Answer = number_01 / number_02;
                cout << "Final_Answer: " << Final_Answer << endl;
                cout << "------------******-----------" << endl;
            }
            else
            {
                cout << "Error: Division by zero is not allowed.\n";
                cout << "------------******-----------" << endl;
            }
        }
        else
        {
            cout << "Invalid operation. Please choose from +, -, *, /.\n";
            cout << "------------******-----------" << endl;
        }
    }

    return 0;
}