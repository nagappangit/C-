#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// C++ Structures (struct)

// Define a structure named 'Person'
struct Person {
    string name;
    int age;
    float height;

void structures(){
    
    // Function to display the person's information
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " ft" << endl;
}
};

int main() {
    // Declare and initialize a structure
    Person person1 ={"My Name",40,5.8f};
    // Call the function to display person's info
    person1.structures();
    return 0;
}