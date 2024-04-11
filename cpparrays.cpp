#include <iostream>
#include <string>
#include <cmath>

using namespace std;
//C++ Arrays
void arrays(){
    string election[5] = {"facebook", "twitter", "linkedin", "instagram", "pinteret"};
    cout << election[0] << endl;
    cout << election[1] << endl;
    cout << election[2] << endl;
    cout << election[3] << endl;
    cout << election[4] << endl;
}
//C++ Arrays and Loops
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
int main(){
    //arrays();
    arraysandloops();
    return 0;
}
