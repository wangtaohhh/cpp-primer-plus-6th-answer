#include <iostream>

const int strsize = 80;

struct Bop {
    char fullname[strsize]; // real name
    char title[strsize];    // job title
    char bopname[strsize];  // secret BOP name
    int preference;         // 0 = fullname, 1 = title, 2 = bopname
};

int main(){

    using namespace std;
    const int size = 10;

   

    const Bop bops[size] = {
        {"Wimp Macho", "bbb", "c", 0},
        {"Raki Rhodes", "2XXXX", "3XXXXX", 1},
        {"Celia Laiter", "2AAAA", "3AAAAA", 2},
        {"Hoppy Hipman", "2BBBB", "3BBBBB", 0},
        {"Pat Hand", "4CCCC", "3CCCCC", 1}
    };

    cout << "Benevolent order of Programmers report.\n";
    cout << "a. display by name     b. display by title\n"
         << "c. display by bopname  d. display by preference\n"
         << "q. quit" << endl;
    
    char ch;
    bool exit = true;


    while (exit){
        cin >> ch;
        if (ch == 'q'){
            break;
        }

        for (int i=0; i<size; i++){
            switch (ch) {
                case 'a':
                    cout << bops[i].fullname << "\n";
                    break;
                case 'b':
                    cout << bops[i].title << "\n";
                    break;
                case 'c':
                    cout << bops[i].bopname << "\n";
                    break;
                case 'd':
                    cout << bops[i].preference << "\n";
                    break;

                default:
                    break;
            }
        }
        cout << "Next choice: ";


    }  
    cout << "** Done **" << endl;
    return 0;
}