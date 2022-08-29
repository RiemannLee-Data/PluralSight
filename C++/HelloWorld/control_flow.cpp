// Normally code is executed from top to bottom, some keywords can change this, like if
// conditions must always have ()
// traditonal for loop has three parts: initializer, continue condition, incrementer
#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int firstNumber;
    int secondNumber;
    bool keepgoing = true;
    int answer;
    while (keepgoing)
    {
        cout << "Enter a number: \n";
        cin >> firstNumber;
        cout << "You entered " << firstNumber << ". Enter another number: \n";
        cin >> secondNumber;
        
        if (firstNumber < secondNumber)
        {
            cout << "The first number " << firstNumber << " is less than the second number " << secondNumber << "\n";
        }
        else
        {
            cout << "The first number " << firstNumber << " is not less than the second number " << secondNumber << "\n";
        }

        if (firstNumber == secondNumber)
        {
            cout << "The first number " << firstNumber << " is equal to the second number " << secondNumber << "\n";
        }
        
        if (firstNumber > secondNumber)
        {
            cout << "The first number " << firstNumber << " is larger than the second number " << secondNumber << "\n";
        }

        for (int loop = 0; loop < 10; loop++)
        {
            cout << loop << " " << "\n";
        }
        
        cout << "Compare another pair? 0 means no, and other number means yes: ";
        cin >> answer;
        if (answer == 0)
        {
            keepgoing = false;
        }
        
    }
    
    

}
