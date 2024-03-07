/*#include <iostream>
using namespace std;
int main()
{
    int dost[15];
    cout << endl;
    cout << "All is Well" << endl
         << endl;
  //  cout << "Value of 8th index is " << dost[8] << endl;



    int apple[3]={10,30,50};
    //cout<<"Value at index 2 is :"<<apple[2];
    int n=4;
    for(int i=0; i<n; i++){
        cout<<apple[i]<< " ";
    }
    return 0;
}*/

// #include <iostream>
// using namespace std;
// // printing Array by Function..
// void printArray(int arr[], int size)
// {
//     cout << "printing the Array :" << endl;
//     for (int i = 0; i <= size; i++)
//     {
//         cout << arr[i]<< " ";
//         cout<<endl;
//     }cout<<endl;
    
   
// }
// int main()
// {
//     cout << "every thin is fine :" << endl;

//     int dosti[5] = {1, 2, 3, 4, 5};
//     printArray(dosti, 4);
//     int dostisize=sizeof(dosti)/sizeof(int);
//     cout<<"size of dosti is :"<<dostisize<<endl;

//         return 0;
// }

#include<iostream>
using namespace std;

// HOLD
void printArray(int arr[], int size) {

    cout<< " printing the array " << endl;
    //print the array
    for(int i =0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout<< " printing DONE " << endl;
}

int main() {

    //declare
    int number[15];

    //accessing an array
    cout << "Value at 14 index " << number[14] << endl;

    //cout << "Value at 20 index " << number[20] << endl;

    //initialising an array 
    int second[3] = {5, 7, 11};

    //accesing an element
    cout << "Value at 2 index " << second[2] << endl;

    int third[15] = {2,7};

    int n = 15;
    //printArray(third, 15);
    int thirdSize = sizeof(third)/sizeof(int);
    cout<<" Size of Third is " << thirdSize <<endl;

    //initialising all locations with 0
    int fourth[10] = {0};

    n = 10;
    //printArray(fourth, 10);

    //initialising all locations with 1 [not possible with below line]
    int fifth[10] = {1};

    n = 10;
    //printArray(fifth, 10);

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<<" Size of Fifth is " << fifthSize <<endl;
    

    char ch[5] = {'a', 'b', 'c', 'r', 'p'}; 
    cout << ch[3] << endl;

    cout<< " printing the array " << endl;
    //print the array
    for(int i =0; i<5; i++) {
        cout << ch[i] << " ";
    }
    cout<< " printing DONE " << endl;
    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];


    cout << endl << " Everything is Fine " << endl << endl;

    return 0;
}