#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//C++ While Loop
void whileloop(){    
    int age;
    cout << "Please Enter your age:";
    cin >> age;
    while (age <= 18)
    {
        cout << "You are the eligible person to vote in India !!!" << endl;
        age ++;
    }    
}
//C++ Do/While Loop
void dowhileloop(){
    int age;
    cout << "Please Enter your age:";
    cin >> age;
    do{
        if (age >= 18 ){
        cout << "You are the eligible person to vote in India !!!" << endl;
        }
        else{
        cout << "You are not the eligible person to vote in India !!!" << endl;
        }
        age ++;
    }while (age <= 18);    
}
int main(){
    whileloop();
    dowhileloop();
    return 0;
}