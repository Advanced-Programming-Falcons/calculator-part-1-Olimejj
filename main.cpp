#include <iostream>

using namespace std;

int main(void){

    int num1 = 0;
    int num2 = 0;
    char choice = 'a';

    while (true){

        cout << "please enter the oporation you want to perform +=*/: ";
        cin >> choice;
        cout << "\nEnter num1: ";
        cin >> num1;
        cout << "\nEnter num2: ";
        cin >> num2;

        if (choice == '+'){
            cout << num1 << '+' << num2 << '=' << num1+num2 << endl;
        }
        if (choice == '-'){
            cout << num1 << '-' << num2 << '=' << num1-num2 << endl;
        }
        if (choice == '*'){
            cout << num1 << '*' << num2 << '=' << num1*num2 << endl;
        }
        if (choice == '/'){
            cout << num1 << '/' << num2 << '=' << num1/num2 << endl;
        }
    }



    return 0;
}