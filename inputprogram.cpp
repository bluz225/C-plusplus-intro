#include<iostream>
using namespace std;
int main(){
    // setting variables
    string firstName, lastName;
    // print input prompt and ask for input for first name
    cout<<"Enter your first name:";
    cin>> firstName;

    // print input prompt and ask for input for last name
    cout<<"Enter your last name:";
    cin>> lastName;

    // print data stored in variables
    cout<<"Your full name is "<<firstName+lastName;
    return 0;
}