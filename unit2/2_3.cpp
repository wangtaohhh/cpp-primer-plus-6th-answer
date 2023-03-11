#include <iostream>

void fun_1(void);
void fun_2(void);
int main(){
    fun_1();
    fun_1();
    fun_2();
    fun_2();

    return 0;
}

void fun_1(void){
    using namespace std;
    cout << "three blind mice" << "\n";
}

void fun_2(void){
    using namespace std;
    cout << "see how they run" << "\n";
}
