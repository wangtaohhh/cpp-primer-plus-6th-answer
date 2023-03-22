#include <iostream>
#include <string>
struct CandyBar
{
    std::string band;
    double weight;
    int calory;
};


int main(){
    using namespace std;

    CandyBar snack = {"Mocha Munch", 2.3, 350};    

    cout << "The name of the CandyBar: " << snack.band << "\n";
    cout << "The weight of the candy: " << snack.weight << "\n";
    cout << "The calories information: " << snack.calory << endl;

    return 0;


}

