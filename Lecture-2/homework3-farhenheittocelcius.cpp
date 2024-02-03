#include <iostream>
using namespace std;
int main()
{
    float f;
    cout<<"enter temperature in celsius :"<<endl;
    cin >> f;
    float ans;
    ans = (f*1.8)+32;

    cout<<"after converting celsius to farheneit :"<<ans<<endl;

        return 0;
}