#include <iostream>

int main(){
    using namespace std;
    cout << "input your height: _____\b\b\b\b\b";
    int height;
    const int trans = 12;
    cin >> height;
    cout << "your height is:" << height * trans;
    return 0;


}