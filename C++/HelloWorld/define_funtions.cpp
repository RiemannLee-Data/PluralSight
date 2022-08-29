// define a function also declear it, taks parameters which have a type and a name
// when you call a function, the arguments you supply might be converted to the parameters the function takes
// compiler will warn about that


#include <iostream>

using std::cout;
using std::cin;

int add(int x, int y)
{
    return x+y;
}

// function names don't need to be different as long as the compiler can tell them apart -> overloading
// for example, taking different number of arguments
double add(double i, double j, double k)
{
    return i+j+k;
}

int main()
{
    int firstNumber;
    int secondNumber;
    cout << "Enter the first number to be added: \n";
    cin >> firstNumber;
    cout << "Enter the second number to be added: \n";
    cin >> secondNumber;
    int total = add(firstNumber, secondNumber);

    cout <<  "The sum of " << firstNumber << " and " << secondNumber << " is " << total << '\n';

    cout <<  "The sum of " << firstNumber << " and " << secondNumber << " is " << add(firstNumber, secondNumber, total) << '\n';
}