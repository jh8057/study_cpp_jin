#include <iostream>
using namespace std;
int main()
{

    // 구조체  = 객체
    struct MyStruct
    {
        /* data */
        string name;
        float age;
    };

    // 선언하지 않은건 0 으로 저장
    MyStruct myStruct = {
        "asd",
    };
    myStruct.name = "awrw";

    cout << myStruct.name << endl;

    MyStruct array[2] = {
        {"name1", 1},
        {"name2", 1},
    };

    cout << array[1].name << endl;

    // 공용체 union
    // 공용체는 멤버들이 메모리를 공유한다.
    // 한번에 한가지 타입만 사용가능하다.
    // 공용체의 크기는 가장 큰 멤버의 크기와 같다.
    // 공용체의 멤버들은 동시에 사용할 수 없다.
    // 공용체의 멤버들은 동시에 초기화할 수 없다.
    union MyUnion
    {
        /* data */
        int a;
        float b;
    };

    // 열거형 enum
    // 기호 상수를 만드는 방법 중 하나
    // 기호 상수란 프로그램에서 사용하는 상수를 의미한다.
    // 열거형은 정수형 상수를 만드는 것이다.

    enum MyEnum
    {
        /* data */
        a,     // 0
        b,     // 1
        c = 4, // 직접 넣어줄 수 있음
    };

    MyEnum myEnum = a;  // 0
    MyEnum myEnum2 = c; // 2

    int sum;
    sum = b + c;

    cout << sum << endl;

    return 0;
}