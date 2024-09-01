#include <iostream>
#include <string>
#include <cmath>

using namespace std;
// C++ Arrays
void arrays(){
    string election[5] = {"facebook", "twitter", "linkedin", "instagram", "pinteret"};
    cout << election[0] << endl;
    cout << election[1] << endl;
    cout << election[2] << endl;
    cout << election[3] << endl;
    cout << election[4] << endl;
}
// C++ Arrays and Loops
void arraysandloops(){
string electioncampaignmedia[5];
for(int i = 0; i < 5; i++){
    cout << "Enter the Election Campaign Media:";
    cin >> electioncampaignmedia[i];
}
cout << "The Election Campaign Medias are here:" << endl;
for(int i = 0; i < 5; i++){
    cout << electioncampaignmedia[i] << endl;
}
}
// C++ Omit Array Size
void omitarraysize(){
     // Omit the size of the array, compiler will deduce the size
    int numbers[] = {1, 2, 3, 4, 5};

    // Calculate the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Print the array elements
    cout << "Array Elements: ";
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " " << endl;
    }
}
// Omit Elements on Declaration
void omitelementseondeclaration(){
     // Omit the size of the array, compiler will deduce the size
    int numbers[] = {1, 2, 3, 4, 5};

    // Calculate the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Print the array elements
    cout << "Array Elements: ";
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " " << endl;
    }
}
int main(){
    // arrays();
    // arraysandloops();
    // omitarraysize();
    omitelementseondeclaration();
    return 0;
}
