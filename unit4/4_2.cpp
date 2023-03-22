#include <iostream>


int main(){

    using namespace std;
    const int ArSize = 20;
    string name;
    string dessert;

    cout << "enter your name: \n";
    getline(cin, name);


    cout << "enter your favourite dessert: \n";
    getline(cin, dessert);

    cout << "I have delicious " << dessert;
    cout << " for you,  " << name << ".\n";

    return 0;

}


