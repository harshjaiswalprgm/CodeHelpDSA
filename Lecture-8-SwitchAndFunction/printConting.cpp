#include<iostream>
using namespace std;

//Function Signature hai
void printCounting(int num) {

//    cout << n << endl;
    //Function Body  hai..
    for(int i=1; i<=num; i++) {
        cout<< i << " ";
    }
    cout<<endl;
}

int main() {

    int n;
    cin >> n;

    //function Calling
    printCounting(n);


    return 0;
}