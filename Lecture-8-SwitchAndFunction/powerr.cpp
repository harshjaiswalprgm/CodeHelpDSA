#include <iostream>
using namespace std;

int power()
{
    int a, b;
    cin >> a >> b;
    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }

    return ans;
}
int main()
{

    int ans = power();  //calling the function...
    cout << "answer is " << ans;

    /*
    //by the function;
        int a, b;
        cin >> a >> b;
        int ans = power(a, b);
        cout << "answer is " << ans;*/

    /* int a, b;
     cin >> a >> b;
     int ans = 1;
     for (int i = 1; i <= b; i++)
     {
         ans = ans * a;
     }
     cout << "answer is " << ans << endl;

     int c, d;
     cin >> c >> d;
     int answ = 1;
     for (int i = 1; i <= d; i++)
     {
         answ = answ * c;
     }
     cout << "answer is " << answ << endl;*/

    return 0;
}

// insted of writng again aagain code we use function to better understanding and optimise the code.
// we can optimise our code by did't paas the value in function insted of declearing data inside the function body;
// this can reduse the line of code.