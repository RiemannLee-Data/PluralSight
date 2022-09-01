#include <iostream>

using std::cout;
using std::cin;

#include <string>
using std::string;

int main()
{
    string name;
    cout << "Who are you? \n";
    cin >> name;
    string greeting;
    if (name == "Kate")
    {
        greeting = "Hello, " + name;
        greeting += ", I know you!";
        cout << greeting << "\n";
    }
    else
    {
        greeting = "Sorry, " + name;
        // greeting += ", it seems that you are not our member...";
        cout << greeting << "\n";
    }

    int l = greeting.length();
    cout << "\"" + greeting + "\"" + " is " << l << " characters long \n";

    string begining = greeting.substr(greeting.find(" ") + 1);
    cout << begining;
    if (begining == name)
    {
        cout << "expected result. \n";
    }
    
    return 0;
}
