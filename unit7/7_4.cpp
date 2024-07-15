#include <iostream>


long double result(unsigned number, unsigned pick){
    
    using namespace std;

    long double under = 1;
    long double n;
    unsigned p;



    for (n=number, p=pick; p>0; n--, p-- ){
        under *= n;

    }
    cout << under  << endl;

    long double up = 1;
    long double n_up;
    unsigned p_up;

    for (n_up=pick; n_up>0; n_up--){

        up *= n_up;
    }
    cout << up << endl;

    
    long double consequence = up / under ;
    
    cout << "---------------" << endl;
    cout << consequence;
    return consequence;
}




int main(){
    using namespace std;
    cout << result(45, 5) * result(27, 1) << endl;
}