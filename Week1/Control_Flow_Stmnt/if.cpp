#include <iostream>
using namespace std;
int main()
{
    // int budget;
    // cout << "enter ur budget " << endl;
    // cin >> budget;
    // if(budget>2000000){
    //     cout << "harsh is able to buy the Safari " << endl;
    // }else{
    //     cout << "harsh is not able to buy the Safari " << endl;
    // }

    ///////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////

    //-->> this if condition is only used when we have only true values
    //-->>but if false value comes then we have else statement>>>>>See Below

    //     int marks = 45;
    //     if (marks > 90)
    //     {
    //         cout << "A" << endl;
    //     }
    //     else if (marks > 80)
    //     {
    //         cout << "B" << endl;
    //     }
    //     else if (marks > 70)
    //     {
    //         cout << "C" << endl;
    //     }
    //     else if (marks > 60)
    //     {
    //         cout << "D" << endl;
    //     }
    //     else if (marks > 50)
    //     {
    //         cout << "F" << endl;
    //     }
    //     else
    //     { //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<Here<<<<<<<<<<<
    //         cout << "Student is Debarded" << endl;
    //     }

    //     return 0;
    // }

    ///////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////
    // Now this is if-else-if statement again this stmnt looks for true values,
    // not for false if there is no false valuse it will print nothing.
    // that u can see in last block of code above.

    int height, weight;
    cout << "enter ur height " << endl;
    cin >> height;

    cout << "enter ur weight " << endl;
    cin >> weight;
    if (height > 5)
    {
        if (weight > 50)
        {
            cout << "harsh is fit" << endl;
        }
        else
        {
            cout << "harsh is not fit" << endl;
        }
    }
    else
    {
        cout << "harsh tu gym jaa yr" << endl;
    }
    return 0;
}