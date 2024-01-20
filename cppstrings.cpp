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
int  main(){
    stringtext();
    return 0;
}