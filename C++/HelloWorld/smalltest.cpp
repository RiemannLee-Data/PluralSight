// input, output, files, screens, keyboards, other sources
// cout is the console output <<, where cin is console input >>
// can send several separate things at once


#include <iostream>

// can just write cout instead of writing std:: before it
using std::cout;
using std::cin;

int main()
{
    // in window system it automatically runs into the next line
    // but in other system might not be so
    // double quote and singe quote are different
    // almost every line end with ;
    // :: is called the scope resolution operator
    // variables in C++ have a type, some types are built into it, some types are used-defined
    // the type does not change
    // can ask the compiler to deduce type when initializing
    int i = 2 * 3;
    float j = 4.3;  //otherwise int j just output 4


    // keyboard input 
    // the library takes care of parsing
    int k;
    cout << "Enter a number \n";
    cin >> k;

    cout << "Hello World" << '\n' << i << '\n' << j << '\n' << k << std::endl;
}