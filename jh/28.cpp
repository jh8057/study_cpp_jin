#include <iostream>
using namespace std;
int main()
{
    //  참조란?
    //  변수에 별명을 붙이는 것
    //  참조는 선언과 동시에 초기화해야 한다.
    //  참조는 한번 초기화되면 다른 변수로 변경할 수 없다.

    // 참조와 포인터로 변수 수정시, 원본 변수가 변경이 된다.
    // 값을 넘기는 경우는 원본 변수가 변경되지 않는다.

    int a = 1;
    int &b = a;

    cout << b << endl;
    return 0;
}