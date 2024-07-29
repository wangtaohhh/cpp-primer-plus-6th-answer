// 8_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
#include <cctype>
#include <string>
#include <cstring>

using namespace std;
void up(string&);

int main(void)
{
    string str;
    using namespace std;
    cout << "Enter a string (q to quit): ";
    getline(cin, str);
    while (str != "q")
    {
        up(str);
        cout << str << endl;

        cout << "Next string (q to quit): ";
        getline(cin, str);
    }

    cout << "Bye" << endl;

    return 0;
}

void up(string & str) {
    string strr = "John is from USA.";
    char ch;

    cout << "The uppercase version of \"" << strr << "\" is " << endl;

    for (int i = 0; i < str.size(); i++) {

        // convert str[i] to uppercase
        ch = toupper(str[i]);
        str[i] = toupper(str[i]);
        cout << ch << endl;
    }

    
}