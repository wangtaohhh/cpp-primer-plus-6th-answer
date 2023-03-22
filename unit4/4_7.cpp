#include <iostream>
#include <string>

struct Pizza
{
    std::string company;
    double diameter;
    double weight;
};


int main(){
    using namespace std;
    Pizza pizza;


    cout << "Enter the company: ";
    getline(cin, pizza.company);

    cout << "Enter the diameter: ";
    cin >> pizza.diameter;

    cout << "Enter the weight: ";
    cin >> pizza.weight;
    
    cout << "\nHere is the pizza information: \n"
         << "Company: " << pizza.company << "\n"
         << "Diameter: " << pizza.diameter << "\n"
         << "Weight: " << pizza.weight << endl;

    return 0;



}


