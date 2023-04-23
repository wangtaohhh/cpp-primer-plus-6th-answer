#include <iostream>

int input_score(double data[]){
    std::cout << "Enter the score, -1 to quit: " << std::endl;
    bool exit = false;
    int i = 0;
    double score;
    for ( i; i<10; i++ ){
        std::cout << "input the num: ";
        
        std::cin >> score;
        if (score == -1) {
            break;
        }

        data[i] = score;
    }
    // std::cout << i;
    return i + 1;
} 


double calculate_avg(double *data, int total_num){
    double average;
    double sum;
    int i;
    for (i=0; i<total_num; i++){
        sum += data[i];
        if (data[i] == -1) {
            continue;
        }  
    }
    
    average = sum / total_num;
    return average;
}

int main(){

    double golf_score[10];
    int all_num = input_score(golf_score) - 1;
    std::cout << all_num;
    double avg_score = calculate_avg(golf_score, all_num);
    // input_score(golf_score);

    std::cout << "The average is: " << avg_score << std::endl;
    return 0;


}
