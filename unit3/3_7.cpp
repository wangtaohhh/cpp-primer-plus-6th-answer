#include <iostream>


int main(){

    using namespace std;
    int european;
    cout << "input european";

    cin >> european;

    double l = double(european) / 3.875;
    double km = double(100)/62.14;
    cout << "us is :" << km / l;
    return 0;


}





