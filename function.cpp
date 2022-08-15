#include<iostream>
using namespace std;

int sumFunction(float val1, float val2){
    float result = val1 + val2;
    return result; 
}

int subFunction(float val1, float val2) {
    float result = val1 - val2;
    return result; 
}

int main(){
    string name, fullName;
    float input1, input2;

    cout << "What is your name? ";
    // cin >> fullName;
    getline(cin,fullName);

    // input first value
    cout << "input first value to sum: ";
    cin >> input1;
    // input 2nd value
    cout << "input second value to sum: ";
    cin >> input2;

    float sum = sumFunction(input1,input2);
    // float sub = subFunction(input1,input2);
    // cout << "the sum is " << sub;
    // cerr << "error message: something is wrong" << endl;
    cout << "your name is " << fullName << endl;
    cout << "the sum is " << sum << endl;
    // not sure why the sum isnt a float when the input and declaration is float
    return 0;
}