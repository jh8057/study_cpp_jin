#include <iostream>
using namespace std;

int sum(int a, int b);
float sum(float a, float b);

int main()
{
    // 함수 오버로딩
    // 함수의 다형
    // 여러 개의 함수를 같은 이름으로 선언하는 것
    // 매개변수의 개수나 타입이 다르면 같은 이름으로 함수를 선언할 수 있다.
    // 여러개 모두 해당되는 경우 에러가 발생한다.

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

float sum(float a, float b)
{
    return a + b;
}