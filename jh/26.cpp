#include <iostream>
using namespace std;

int func(int);
int main()
{
    //  재귀함수
    //  함수가 자기 자신을 호출하는 것

    // 함수 주소르 넘길 수 있다.
    cout << func << endl;

    int (*funcPtr)(int) = func;
    cout << (*funcPtr)(3) << endl;
    return 0;
}

int func(int a)
{
    return a + 1;
}