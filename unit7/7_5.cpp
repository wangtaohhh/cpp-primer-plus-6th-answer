#include <iostream>


int main(){
    using namespace std;
    int y;
    long f(int n);
    cin >> y;
    cin.get();


    cout << y << endl;

  
    cout << f(y);

}





long f(int n){

    if (n == 0) {
        return 1;
    }

    else {
        return n * f(n-1);
    }













}




























