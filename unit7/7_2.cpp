#include <iostream>

int input_score(double data[]){
    std::cout << "Enter the score, -1 to quit: " << std::endl;
    bool exit = false;
    int i = 0;
    while (!exit) {
        for ( i; i<10; i++ ){
            std::cout << "input the num: ";
            std::cin >> data[i];
            if (data[i] == -1) {
                break;
            }
        }
    } 
    return i;
}

double calculate_avg(double data[]){
    double average;
    double sum;
    int i;
    for (i=0; i<)
}

