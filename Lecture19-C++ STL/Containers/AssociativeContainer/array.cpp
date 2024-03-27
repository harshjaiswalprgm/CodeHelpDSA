#include <iostream>
#include<array>
using namespace std;
int main()
{
    int arr[3]={1,2,3};
    array<int,4> a={1,2,3,4};
    //DIFFERENCE
    //STL wale array ki implementation upar waale array se hoti hai.
    //Array STL ki implementation fixed size ke array se hoti hai.
    int size =a.size();
    for(int i=0; i<size; i++){
        cout<<"Size of array is :"<<a[i]<<endl;
    }
    //we can also access the element by their index.
    cout<<"element at 3rd index is :"<<a.at(3)<<endl;
    //checking empty or not
    cout<<"Array is mpty or not :"<<a.empty()<<endl;

    //for accessing front and back means alst element.
    cout<<"front element is : "<<a.front()<<endl;
    cout<<"back element is : "<<a.back()<<endl;
    return 0;
}