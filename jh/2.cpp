#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int :" << sizeof n_int << "bytes." << endl;
    cout << "short :" << sizeof n_short << "bytes." << endl;
    cout << "long :" << sizeof n_long << "bytes." << endl;
    cout << "long long :" << sizeof n_llong << "bytes." << endl;

    unsigned int a = -1;
    unsigned short b = -1;

    cout << a << "\n"
         << b << endl;

    float c = 3.14;
    double d = 3.14;
    int f = 3.14;

    cout << c << "\n"
         << d << "\n"
         << f << endl;
    return 0;
}