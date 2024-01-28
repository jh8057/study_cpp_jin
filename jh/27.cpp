#include <iostream>
using namespace std;

inline int func(int a)
{
    return a + 1;
}

inline int func2(int a = 1, int b = 2)
{
    return a + b;
}

int main()
{
    // 인라인 함수
    // 함수 호출을 줄이기 위해 사용
    cout << func(3) << endl;

    // default 매개변수
    cout << func2() << endl;

    return 0;
}