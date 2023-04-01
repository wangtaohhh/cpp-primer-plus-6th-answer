#include <iostream>
#include <fstream>
#include <string>

int main(){
    using namespace std;
    
    ifstream ifs;
    char ch;
    int n = 0;

    ifs.open("text");
    while (ch = ifs.get() != EOF){
        n++;
    }
    ifs.close();
    cout << n << "words";
    return 0;



}


