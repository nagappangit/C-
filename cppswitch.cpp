#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//C++ Switch
void switchcase(){
    int month;
    cout << "Enter the number between 1 and 12 and get your month's name: ";
    cin >> month;
    switch (month) //Use a switch statement to select one of many blocks of code to be executed.
    {
    case 1 :
        cout << "January";
        break;
    case 2:
        cout << "February";
        break;
    case 3:
        cout << "March";
        break; 
    case 4:
        cout << "April";
        break;
    case 5:
        cout << "May";
        break;
    case 6:
        cout << "June";
        break;
    case 7:
        cout << "July";
        break;
    case 8:
        cout << "August";
        break;
    case 9:
        cout << "September";
        break;
    case 10:
        cout << "October";
        break;
    case 11:
        cout << "November";
        break;
    case 12:
        cout << "December";
        break;
    default:
        cout << "Kindly Please Enter The Number between 1 and 12";
        break;
    }
}

int main(){
    switchcase();
    return 0;
}