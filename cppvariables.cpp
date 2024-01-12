#include <iostream>
using namespace std;
//c++ variables
//Declare Varibales
void declareVaribales(){
    int numValue = 30; // Integer (Full Value without decimal value)
    cout << numValue << "\n";
    double floatValue = 3.3; // Floating point value (Full value with decimal value)
    cout << floatValue << "\n";
    char charLetter = 'N'; // Character
    cout << charLetter << "\n";
    string stringText = "Welcome to Learn C++"; // String (Group of texts)
    cout << stringText << "\n";
    bool trueResult = true; // Boolean (True or False)
    cout << trueResult << "\n";
}
//C++ Declare Multiple Variables
void multiVariables(){
    int a = 5, b = 10, c = 15, d; // same integer type varibales using ,
    d = a + b + c;
    cout << d << "\n";
}
//C++ Identifiers
void indenTifiers(){
    int monthsPeryear = 12; // this is identifier / unique names are called identifiers
    cout << monthsPeryear << "\n";
    int m = 12; // Yes, but not so easy to understand what "m" actually is
    cout << m << "\n";
}
int main(){
    declareVaribales();
    multiVariables();
    indenTifiers();
    return 0;
}