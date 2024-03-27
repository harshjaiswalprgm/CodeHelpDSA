#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"capacity :"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity"<<v.capacity()<<endl;

    
    v.push_back(2);
    cout<<"capacity"<<v.capacity()<<endl;

    
    v.push_back(3);
    cout<<"capacity"<<v.capacity()<<endl;

    cout<<"size is :"<<v.size()<<endl;
    cout<<"element at 2nd index :"<<v.at(2)<<endl;
    return 0;
}
//Dynamic array hota hai.
//jaise vector bhar jayega to ye apna size double kr dega.
//aur purane waale ko delete kr dega aur new waale me sare value ko daal dega.
