#include <iostream>
#include <string>

struct CandyBar
{
    std::string name;
    double weight;
    int calories;
};


int main(){

    using namespace std;

    CandyBar *p_candybar = new CandyBar [3]
    {
        {"Mocha Munch", 2.3, 350},
        {"Big Rabbit", 5, 300},
        {"Joy Boy", 4.1, 430}
    };


    cout << "The name of the CandyBar: " << p_candybar[0].name << "\n"
         << "The weight of the candy: " << p_candybar[0].weight << "\n"
         << "The calories information: " << p_candybar[0].calories << "\n\n";
    
    cout << "The name of the CandyBar: " << p_candybar[1].name << "\n"
         << "The weight of the candy: " << p_candybar[1].weight << "\n"
         << "The calories information: " << p_candybar[1].calories << "\n\n";

    cout << "The name of the CandyBar: " << p_candybar[2].name << "\n"
         << "The weight of the candy: " << p_candybar[2].weight << "\n"
         << "The calories information: " << p_candybar[2].calories << "\n\n";

    delete [] p_candybar;
    return 0;
}



