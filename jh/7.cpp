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

    return 0;
}