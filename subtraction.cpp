#include <iostream>
using namespace std;
void subtraction(){
    int a, b, c;
    cout << "Enter the first number:";
    cin >> a;
    cout << "Enter the second number:";
    cin >> b;
    c = a - b;
    cout << "The subtracted value is:" << c;
}
int main(){
    subtraction();
    return 0;
}