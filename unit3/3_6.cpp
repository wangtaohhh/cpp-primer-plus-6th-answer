#include <iostream>

int main(){
    using namespace std;
    int gallon;
    cout << "input gallon:";
    cin >> gallon;


    int mile;
    cout << "input mile:";
    cin >> mile;

    double gallon_mile = double(gallon) / double(mile);
    cout << gallon_mile;

    return 0;
    
}

