#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//C++ Math
//Max and min
void maxandmin(){
    int a, b;
    cout << "Enter the first value: ";
    cin >> a;
    cout << "Enter the second value: ";
    cin >> b;
    cout << "The maximum value is: " << max(a,b) << endl; // The max(a,b) function can be used to find the highest value of a and b
    cout << "The Minimum value is: " << min(a,b); // // The min(a,b) function can be used to find the smallest value of a and b
}
//Other Math Functions
void othermathfunctions(){
    int a;
    float b;
    cout << "Enter the a value: ";
    cin >> a;
    cout << "Enter the b value: ";
    cin >> b;
    cout << "The square root of value a is: " << sqrt(a) << endl;
    cout << "The square root of value b is: " << sqrt(b) << endl;
    cout << "The round value of a is: " << round(a) << endl;
    cout << "The round value of b is: " << round(b) << endl;
    cout << "The log value of a is: " << log(a) << endl;
    cout << "The log value of b is: " << log(b) << endl;
    cout << "The absolute value of a is: " << abs(a) << endl;
    cout << "The absolute value of b is: " << abs(b) << endl;
    cout << "The arccosine value of a is: " << acos(a) << endl;
    cout << "The arccosine value of b is: " << acos(b) << endl;
    cout << "The arcsine value of a is: " << asin(a) << endl;
    cout << "The arcsine value of b is: " << asin(b) << endl;
    cout << "The arctangent value of a is: " << atan(a) << endl;
    cout << "The arctangent value of b is: " << atan(b) << endl;
    cout << "The nearest integer value of a is: " << ceil(a) << endl;
    cout << "The nearest integer value of b is: " << ceil(b) << endl;
    cout << "The cosine value of a is: " << cos(a) << endl;
    cout << "The cosine value of b is: " << cos(b) << endl;
    cout << "The E value of a is: " << exp(a) << endl;
    cout << "The E value of b is: " << exp(b) << endl;
    cout << "The ex -1 value of a is: " << expm1(a) << endl;
    cout << "The ex -1 value of b is: " << expm1(b) << endl;
    cout << "The absolute  value of a is: " << fabs(a) << endl;
    cout << "The absolute value of b is: " << fabs(b) << endl;
    cout << "The rounded down to its nearest integer value of a is: " << floor(a) << endl;
    cout << "The rounded down to its nearest integer value of b is: " << floor(b) << endl;
    cout << "The sine value of a is: " << sin(a) << endl;
    cout << "The sine value of b is: " << sin(b) << endl;
    cout << "The hyperbolic sine value of a is: " << sinh(a) << endl;
    cout << "The hyperbolic sine value of b is: " << sinh(b) << endl;
    cout << "The tangent value of a is: " << tan(a) << endl;
    cout << "The tangent value of b is: " << tan(b) << endl;
    cout << "The hyperbolic tangent value of a is: " << tanh(a) << endl;
    cout << "The hyperbolic tangent value of b is: " << tanh(b) << endl;
    cout << "The value of a to the power of b is: " << pow(a, b) << endl;
    cout << "The value of b to the power of a is: " << pow(b, a) << endl;
    cout << "The floating point remainder of a/b is: " << fmod(a, b) << endl;
    cout << "The floating point remainder of b/a is: " << fmod(b, a) << endl;
    cout << "The value of sqrt(a2 +b2) is: " << hypot(a, b) << endl;
}
int main(){
    maxandmin();
    othermathfunctions();
    return 0;
}