#include <iostream>
#include <string>

int main(){
    using namespace std;
    const int GRAND = 10000;

    struct Patron {
        string name;
        double amount;
    };

    int contribute_num = 0;
    cout << "Enter the number of contributor: ";
    cin >> contribute_num;
    cin.get();

    Patron *contribution = new Patron [contribute_num];
    for (int i=0; i<contribute_num; i++){
        cout << "Enter the name of " << i + 1 << "contributor: ";
        getline(cin, contribution[i].name);
        cout << "Enter the amount of donation: ";
        cin >> contribution[i].amount;
        cin.get(); 
    }


    int mount_n = 0;
    cout << "\nGrand patron: " << endl;
    for (int i=0; i < contribute_num; i++){
        if (contribution[i].amount > GRAND) {
            cout << "Contributor name: " << contribution[i].name << "\n"
                 << "Contributor amount: " << contribution[i].amount << endl;
            ++mount_n;
    }
    if (mount_n == 0){
        cout << "None" << endl;

    }
    bool is_empty = true;
    cout << "\nPatrons: " << endl;
    for (int i=0; i < contribute_num; ++i) {
        cout << "Contributor name: " << contribution[i].name << "\n"
             << "Contributor amount: " << contribution[i].amount << endl;

        is_empty = false;
    }

    if (is_empty) {
        cout << "** None **" << endl;
    }

    return 0;




    }

}
