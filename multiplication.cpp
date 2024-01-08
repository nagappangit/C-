#include <iostream>
using namespace std;
//Simple multiplication cpp program
void multiplication(){
    int a,b,c;
    cout << "Enter the first value: ";
    cin >> a;
    cout << "Enter the second value: ";
    cin >> b;
    c = a * b;
    cout << "The result is: " << c;
}
int main(){
    multiplication();
    return 0;
}