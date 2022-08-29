#include <iostream>

using std::cout;
using std::cin;

int add(int x, int y);

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
}