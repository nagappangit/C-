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
int main(){
    maxandmin();
}