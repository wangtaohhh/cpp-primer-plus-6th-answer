#include <iostream>
#include <string>

struct Pizza
{
    char company[20];
    double diameter;
    double weight;
};


int main(){

    using namespace std;
    Pizza *pizza = new Pizza;

    cout << "Enter company: ";
    cin.get(pizza->company, 20);

    cout << "Enter diameter: ";
    cin >> pizza->diameter;

    cout << "Enter weight: ";
    cin >> pizza->weight;

    cout << "\nHere is the pizza information: \n"
         << "Company: " << pizza->company << "\n"
         << "Diameter: " << pizza->diameter << "\n"
         << "Weight: " << pizza->weight << endl;

    delete pizza;

    return 0;

}













