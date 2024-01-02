#include <iostream>
using namespace std;
int main()
{
    /**
     * char type
     */
    int a = 77;
    char b = a;

    cout << a << endl;
    cout << b << endl;

    /**
     * char b = 'b' ok
     * char b = "b" error : ""로 감싸면 끝에 null 문자가 들어가기 때문에 char에 넣을 수 없다.
     * ""로 감싸면 string type이 된다.
     */
    char c = 'c';
    string stringC = "c";
    cout << c << stringC << endl;

    char d[] = {'d', 'e', 'f', 'g', '\0'};
    char e[] = {'d', 'e', 'f', 'g'};
    cout << d << endl;
    cout << e << endl;

    /**
     * bool type
     * true : 1
     * false : 0
     */
    bool f = true;
    bool g = false;
    cout << f << endl;
    cout << g << endl;

    return 0;
}