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
int main(){
    arithmeticoperators();
    assignmentoperators();
    return 0;
}