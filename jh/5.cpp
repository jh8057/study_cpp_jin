#include <iostream>
using namespace std;
int main()
{
    /*
    배열
    typeName arrayName[arraySize];
    */

    int array[5] = {1, 2, 3, 4, 5};
    char b[] = {'a', 'b', '\0'};

    string a[] = {"a", "b"};
    /*
     문자열
    */
    char c[] = "abc";

    cout << array[0] << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}