#include <iostream>

int main(){

    using namespace std;

    cout << "Please enter one of the following choices: " << endl;
    cout << "c) carnivore\tup) pianist." << endl
         << "t) tree\tg) game" << endl;

    char ch;
    bool exit = false;
    while (!exit && (cin >> ch)){

        switch (ch)
        {
        case 'c':
            cout << "Tiger is a carnivore." << endl;
            exit = true;
            break;

        case 'p':
            cout << "Liszt is a pianist." << endl;
            exit = true;
            break;

        case 't':
            cout << "maple is a tree." << endl;
            exit = true;
            break;

        case 'g':
            cout << "war zone is a game." << endl;
            exit = true;
            break;

        default:
            break;
        }
    }
    return 0;


}

