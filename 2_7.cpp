#include <iostream>

void print();

int main(){
    print();
    return 0;
}



void print(){
    using namespace std;
    int hour;
    cout << "enter the number of hours:";
    cin >> hour;

    int minutes;
    cout << "enter the number of minutes:";
    cin >> minutes;

    cout << "Time: " << hour << ":" << minutes;


}