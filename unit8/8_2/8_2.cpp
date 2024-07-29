// 8_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

struct CandyBar {
    char brand[3000];
    double weight;
    int hot;
};


void set(CandyBar&, const char* brand = "Millennium Munch", double weight = 2.85, int heat = 350);
void show(const CandyBar&);


int main()
{
    std::cout << "Hello World!\n";
    using namespace std;

    CandyBar cb;
    char brand[] = "Munch";
    double weight = 4.85;
    int heat = 650;

    // show default struct
    set(cb);
    cout << "Original Bar: " << endl;
    show(cb);
    cout << "---------------------" << endl;
    // fill struct
    set(cb, brand, weight, heat);
    // show struct
    cout << "New Bar: " << endl;
    show(cb);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file



void set(CandyBar & cb, const char * brand, double weight, int hot)
{
    strcpy_s(cb.brand, brand);
    cb.weight = weight;
    cb.hot = hot;
}

void show(const CandyBar& cb)
{
    using namespace std;

    cout << "Brand: " << cb.brand << endl;
    cout << "Weight: " << cb.weight << endl;
    cout << "Heat: " << cb.hot << endl;
}