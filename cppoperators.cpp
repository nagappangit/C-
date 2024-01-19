#include <iostream>
using namespace std;
//C++ Operators
//Arithmetic Operators
void arithmeticoperators(){
    int a, b, c;
    cout << "Enter the first number: " << endl;
    cin >> a;
    cout << "Enter the second number: " << endl;
    cin >> b;
    c = a + b;
    cout << "The addition result is: " << c << endl;
    c =  a - b;
    cout << "The subtraction result is: " << c << endl;
    c = a * b;
    cout << "The multiplication result is: " << c << endl;
    c = a / b;
    cout << "The division result is: " << c << endl;
    c = a % b;
    cout << "The modulus result is: " << c << endl;
    c = ++a;
    cout << "The increment result is: " << c << endl;
    c = --b;
    cout << "The decrement result is: " << c << endl;
}
//Assignment Operators
void assignmentoperators(){
    int a, b;
    cout << "Please enter the value: ";
    cin >> a;
    b = a;
    cout << b << endl;
    b += a;
    cout << b << endl;
    b = b + a;
    cout << b << endl;
    b -= a;
    cout << b << endl;
    b = b - a;
    cout << b << endl;
    b *= a;
    cout << b << endl;
    b = b * a;
    cout << b << endl;
    b /= a;
    cout << b << endl;
    b = b / a;
    cout << b << endl;
    b %= a;
    cout << b << endl;
    b = b % a;
    cout << b << endl;
    b &= a;
    cout << b << endl;
    b = b & a;
    cout << b << endl;
    b |= a;
    cout << b << endl;
    b = b | a;
    cout << b << endl;
    b ^= a;
    cout << b << endl;
    b = b ^ a;
    cout << b << endl;
    b >>= a;
    cout << b << endl;
    b = b >> a;
    cout << b << endl;
    b <<= a;
    cout << b << endl;
    b = b << a;
    cout << b << endl;
}
//C++ Comparison Operators
void comparisonoperators(){
    int a,b;
    cout << "Enter the first number:" << endl;
    cin >> a;
    cout << "Enter the second number" << endl;
    cin >> b;
    if(a == b){ // Equal to operator
        cout << a << endl;
    }
    else {
        cout << b << endl;
    }
    if(a != b){ // Not equal operator
        cout << a << endl;
    }
    else{
        cout << b << endl;
    }
    if(a > b){ // Greater than operator
        cout << a << endl;
    }
    else{
        cout << b << endl;
    }
    if(a < b){ // Less than operator
        cout << a << endl;
    }
    else{
        cout << b << endl;
    }
    if (a >= b){ // Greater than or equal to operator
        cout << a << endl;
    }
    else{
        cout << b << endl;
    }
    if(a <= b){ // Less than or equal to operator
        cout << a << endl;
    }
    else{
        cout << b << endl;
    }
}
//C++ Logical Operators
void logicaloperators(){
    int a,b;
    cout << "Enter the first number:" << endl;
    cin >> a;
    cout << "Enter the second number" << endl;
    cin >> b;
    if( a < 10 && b > 10){ // Logical and operator
        a = a + b;
        cout << "The resut is: " << a << endl;
    }
    else{
        b = b - a;
        cout << "The resut is: " << a << endl;
    }
    if( a < 10 || b > 10){ // Logical or operator
        a = a + b;
        cout << "The resut is: " << a << endl;
    }
    else{
        b = b - a;
        cout << "The resut is: " << a << endl;
    }
    if(!(a < b)){ // Logical not operator
        a = a + b;
        cout << "The resut is: " << a << endl;
    }
    else{
        b = b - a;
        cout << "The resut is: " << a << endl;
    }
}
int main(){
    arithmeticoperators();
    assignmentoperators();
    comparisonoperators();
    logicaloperators();
    return 0;
}