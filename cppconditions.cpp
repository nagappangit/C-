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
//C++ Else
void cppelse(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age >= 18){ // Use if to specify a block of code to be executed, if a specified condition is true
        cout << "You are an eligible person to vote in India!!!";
    }
    else{ //  Use else to specify a block of code to be executed if the condition is false

        cout << "You are not an eligible person to vote in India!!!";
    }
}
int main(){
    //ifelse();
    cppelse();
    return 0;
}