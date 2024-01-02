#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!" << endl;

    /*
    변수
    1. 숫자로 시작할 수 없다.
    2. 특수문자는 _와 $만 가능하다.
    3. 예약어는 사용할 수 없다. (c++에서 사용하고 있는 키워드는 사용할 수 없다.)
    4. 대소문자를 구분한다.
    5. 공백을 포함할 수 없다.
    */

    int a = 10;
    int b = 20;
    int c = a + b;
    cout << c << &c << endl;

    return 0;
}