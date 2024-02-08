#include <iostream>
#include <string>
#include <cmath>

using namespace std;
//C++ Booleans
void booleans(){    
    bool a = true;
    cout << a << endl; // Output 1 (true)
    bool b = false;
    cout << b << endl; // Output 0 (false)
}
//C++ Boolean Expressions
void booleanexpressions(){
    string firstName, lastName;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    if (firstName != lastName){ // Boolean expression returns a boolean value that is either 1 (true) or 0 (false)
        cout << "Your Name is: " << firstName << " " << lastName;
    }
    else{
        cout << "Your first name and last name never should be the same.";
    }
}
int main(){
    booleans();
    booleanexpressions();
}