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
int main(){
     whileloop();
     return 0;
}