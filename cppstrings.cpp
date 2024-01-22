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
int  main(){
    stringtext();
    stringconcatenation();
    return 0;
}