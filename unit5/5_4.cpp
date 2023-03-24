#include <iostream>

int main(){

    using namespace std;
    double daphne = 100;
    double cleo = 100;

    int year = 0;

    while (cleo <= daphne) {
        year++; 
        cleo *= 1.05;
        daphne += 10;
    }

    cout << "now is " << year;
    return 0;



}


