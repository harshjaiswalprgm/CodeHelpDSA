#include<iostream>
using namespace std;
int main(){
    int i=7;
   
   cout<<(++i)<<endl;  //8
   cout<<(i++)<<endl;  //8 but now the value of i is i=9;
   cout<<(i--)<<endl;  //8 but now the value of i is i=9;
   cout<<(--i)<<endl;  //8 but now the value of i is i=9;
   cout<<(--i)<<endl;  //8
   cout<<(i--)<<endl;  //8 again it's postdecrenment so value of i is i=7;

    return 0;
}