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
//C++ Else If
void elseif(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age > 18){ // Use if to specify a block of code to be executed, if a specified condition is true
        cout << "You are an eligible person to vote in India!!!";
    }
    else if(age == 18){ //  Use else to specify a block of code to be executed if the condition is false
     cout << "You are an eligible person to vote in India!!!";        
    }
    else{
        cout << "You are not an eligible person to vote in India!!!";
    }
}
//C++ Short Hand If Else
void shorthandifelse(){
    int age;
    string output;
    cout << "Enter your age: ";
    cin >> age;
    output = ( age >= 18) ? "You are an eligible person to vote in India!!!" : "You are not an eligible person to vote in India!!!"; // Ternary operator because it consists of three operands.
    cout << output;
}
int main(){
    ifelse();
    cppelse();
    elseif();
    shorthandifelse();
    return 0;
}