#include <iostream>
#include <string> // string library
using namespace std;
//C++ Data Types
void dataTypes(){
    string u = "Kg"; // This is text data type / Texts
    char h = 'M'; // Character data type
    string name; // This is text data type / Texts
    cout << "Enter your name: " << endl;
    cin >> name;
    int age; // This is integer data type / The full value
    cout << "Enter your age: " << endl;
    cin >> age;
    double hight; // This is floating point value
    cout << "Enter your hight: " << endl;
    cin >> hight;
    float weight; // This is floating point value
    cout << "Enter your weight" << endl;
    cin >> weight;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Hight: " << hight << h << endl;
    cout << "Weight: " << weight << u <<  endl;
}
int main(){
    dataTypes();
    return 0;
}