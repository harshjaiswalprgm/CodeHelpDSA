/*#include <iostream>
using namespace std;

void update(int a)
{
    a = a / 2;
}
int main()
{
    int a = 10;
    update(a);
    cout << a<<endl;
   // cout<<update;

   */
#include <iostream>
using namespace std;
int update(int a){
    a-=5;
    return a;
}
int main()
{
    int a=15;
    update(a);
    cout<<a<<endl;
}
