#include <iostream>
using namespace std;
//C++ User Inputs
void userInput(){
    int a, b, c;
    string myName;
    cout << "Enter the date" << endl;
    cin >> a; //cin to get user input
    cout << "Enter the month" << endl;
    cin >> b; //cin to get user input
    cout << "Enter the Year" << endl;
    cin >> c; //cin to get user input
    cout << "Enter the Name" << endl;
    cin >> myName; //cin to get user input
    cout << myName << " Date of Birth is: " << a << "-" << b << "-" << c;
}
int main(){
    userInput();
    return 0;
}