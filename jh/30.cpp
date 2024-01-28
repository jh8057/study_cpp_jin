#include <iostream>
using namespace std;

template <typename T> // == template <class T>
T sum(T a, T b)
{
    return a + b;
}
int main()
{
    // 함수 템플릿
    // 함수를 만들 때, 타입을 일반화해서 사용하는 것
    // 함수를 호출할 때, 컴파일러가 자동으로 타입을 추론해서 함수를 생성한다.
    // 템플릿에도 함수 오버로딩이 가능하다.

    cout << sum(1, 2) << endl;
    cout << sum(1.1, 2.2) << endl;
    // cout << sum(1.1f, 2) << endl; // error

    return 0;
}