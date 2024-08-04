// snake.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
char map_position[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
void print_map()
{

    using namespace std;
    cout << "+-" << "-" << "-+-" << "-" << "-+-" << "-" << "-+" << endl;
    cout << "| " << map_position[0] << " | " << map_position[1] << " | "  << map_position[2] << " |" << endl;
    cout << "+-" << "-" << "-+-" << "-" << "-+-" << "-" << "-+" << endl;
    cout << "| " << map_position[3] << " | " << map_position[4] << " | " << map_position[5] << " |" << endl;
    cout << "+-" << "-" << "-+-" << "-" << "-+-" << "-" << "-+" << endl;
    cout << "| " << map_position[6] << " | " << map_position[7] << " | " << map_position[8] << " |" << endl;
    cout << "+-" << "-" << "-+-" << "-" << "-+-" << "-" << "-+" << endl;


}



int main()
{
    int user_1_input;
    int user_2_input;
    std::cout << "Hello World!\n";
    using namespace std;
    for (int i = 1; i <= 9; i++)
    {
        system("cls");
        print_map();
       
        if (i % 2 == 0)
        {
            cin >> user_1_input;
            map_position[user_1_input - 1] = 'o';
        }
        else
        {
            cin >> user_2_input;
            map_position[user_2_input - 1] = 'x';
        }
    }


    
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
