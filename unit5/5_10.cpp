#include <iostream>

int main(){
    using namespace std;

    int line;

    cout << "input your line: ";
    cin >> line;

    for (int i=1; i<=line; i++){
        for (int j=i-1; j>=0; --j){
            cout << ".";
        };
        for (int j = line - (i); j >0; --j) {
            cout << "*";
        };


    };
    return 0;
}


