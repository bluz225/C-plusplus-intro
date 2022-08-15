#include<iostream>
#include<string>
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
    float input1, input2;
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
    cout << "the sum is " << sum;
    // not sure why the sum isnt a float when the input and declaration is float
    return 0;
}