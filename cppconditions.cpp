#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//C++ Conditions
//C++ If ... Else
void ifelse(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age >= 18){ // Use if to specify a block of code to be executed, if a specified condition is true
        cout << "You are the eligible person for voting !!!";
    }
}
int main(){
    ifelse();
    return 0;
}