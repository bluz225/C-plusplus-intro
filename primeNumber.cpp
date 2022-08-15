#include<iostream>
#include<vector>
#include<iterator>
using namespace std;



vector<int> prime( int param ){
    int k = 0;
    vector <int> primeArr;
    for (int i=2; i<=param; i++){ 
        bool primeBool = true;
        for (int j = 2; j<i;j++){           
            if (i%j == 0) {
                primeBool = false;
                break;
            } 
        }
        if (primeBool == true) {
            primeArr.push_back(i);
        }
    }
    return primeArr;
} 

int main(){
    int inputVal;
    vector<int> primeArr;
    cout<<"please enter a number you wish to find prime numbers up to: ";
    cin >> inputVal;
    primeArr = prime(inputVal);
    cout << "prime numbers for ";
    cout << inputVal;
    cout << ":";
    copy(primeArr.begin(), primeArr.end(), std::ostream_iterator<int>(cout," | "));
    cout<<endl;
    
    return 0;
}

