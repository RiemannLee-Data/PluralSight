#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int my_number = 50;
    int answer;
    bool not_guessed = true;

    while (not_guessed)
    {
        cout << "Enter a number: \n";
        cin >> answer;
        
        if (answer < my_number)
        {
            cout << "You answer is too small, try a larger number instead \n";
        }

        if (answer > my_number)
        {
            cout << "You answer is too large, try a smaller number instead \n";
        }

        if (answer == my_number)
        {
            cout << "Congratuations! You answer is correct!";
            not_guessed = false;
        }
    }
    return 0;
}