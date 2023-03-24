#include <iostream>
#include <array>


int main(){
    using namespace std;

    array<long double, 100> fac;
    fac[0] = fac[1] = 1;
    for (int i = 2; i < 100; i++){
        fac[i] = fac[i-1] * i;

    };
    cout << fac[99];
    return 0;

}




