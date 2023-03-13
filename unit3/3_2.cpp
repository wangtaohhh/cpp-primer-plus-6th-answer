#include <iostream>

int main(){
    int foot, inch, weight;
   
    using namespace std;
    cout << "input your foot:\n";
    cin >> foot;
    cout << "input your inch:\n";
    cin >> inch;
    cout << "input your weight(pound):\n";
    cin >> weight;
    const float pound = 2.2;
    const float metre = 0.0254;
    const int foot_inch = 12;
    float height = (foot_inch * foot + inch) / metre;
    float weight_kg = weight / pound;
    float bmi = weight_kg / height / height;
    cout << "\n";
    cout << bmi;

    return 0;


}
