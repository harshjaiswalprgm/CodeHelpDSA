#include <iostream>
using namespace std;
int main()
{
    int a = 123;
    cout << a << endl;
    cout<< "a = 123" << end

    char b = 'h';
    cout << b << endl;

    bool bl = true;
    cout << bl << endl;

    double dl = 23.22;
    cout << dl << endl;

    float f = 1.2;
    cout << f << endl;

    int size = sizeof(a);
    int siz = sizeof(b);
    int si = sizeof(bl);
    int s = sizeof(f);
    int t = sizeof(dl);

    cout << "size of a is :" << size << endl;

    cout << "size of b is :" << siz << endl;

    cout << "size of bl is :" << si << endl;

    cout << "size of f is :" << s << endl;

    cout << "size of b is :" << t << endl;

    unsigned int x = -112;
    cout<<x;

    return 0;
}