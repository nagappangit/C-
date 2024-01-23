#include <iostream>
#include <string> // C++ Strings Library
using namespace std;
//C++ Strings
void stringtext(){
    string name; //  string variable contains a group of characters
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your Name is " << name;
}
//C++ String Concatenation
void stringconcatenation(){
    string firstname, lastname;
    cout << "Enter your first name: ";
    cin >> firstname;
    cout << "Enter your last name: ";
    cin >> lastname;
    cout << "Your Name is " << firstname + " " + lastname; // + operator can be used between one or more strings
}
//C++ Numbers and Strings
//C++ uses the + operator for both addition and concatenation
void numbersandstrings(){
    int a,b,c;
    string firstname, lastname;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    c = a + b; // Numbers are added
    cout << "The result is: " << c << endl;
    cout << "Enter your first name: ";
    cin >> firstname;
    cout << "Enter your last name: ";
    cin >> lastname;
    cout << "Your Name is " << firstname + " " + lastname; // Strings are concatenated
}
int  main(){
    stringtext();
    stringconcatenation();
    numbersandstrings();
    return 0;
}