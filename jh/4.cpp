#include <iostream>
using namespace std;
int main()
{
    /**
     * const : 상수
     */
    const int a = 10;
    // a = 20; error : 상수이기 때문에 값을 변경할 수 없다.
    cout << a << endl;

    /**
     * 형변환
     * 1. 암시적 형변환
     * 2. 명시적 형변환
     * 3. static_cast<type>(value)
     */
    int b = 10;
    double c = b; // 암시적 형변환
    cout << b << endl;
    cout << c << endl;

    double d = 3.14;
    int e = (int)d; // 명시적 형변환
    cout << d << endl;
    cout << e << endl;

    double f = 3.14;
    int g = static_cast<int>(f); // static_cast<type>(value)
    cout << f << endl;
    cout << g << endl;

    return 0;
}