#include <iostream>

int fah(void);

int main(){
    fah();
    return 0;
}

int fah(void){
    using namespace std;
    int celsius;
    cout << "input celsius value:";
    cin >> celsius;
    cout << celsius << " is " << celsius  * 1.8 + 32 << " fah";


}