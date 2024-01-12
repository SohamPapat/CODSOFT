#include <bits/stdc++.h>
#include <iostream>

int main()
{
    using namespace std;
    int r = rand();
    srand(time(0));

    int main_num = r % 100 + 1;
    int guessing = 0;

    cout << "Welcome to Number Guessing game !!" << endl;
    cout << "We have chosen a number between 1 and 100. Try to guess it !!." << endl;

    while (guessing != main_num)
    {
        cout << "Enter your guess: " << endl;
        cin >> guessing;
        if (guessing < main_num)
            cout << "Too low! Try again." << endl;
        else if (guessing > main_num)
            cout << "Too high! Try again." << endl;
        else
            cout << "Congratulations! You guessed the correct number: " << main_num << endl;
    }

    return 0;
}