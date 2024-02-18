#include <iostream>
#include <time.h>
using namespace std;
int main()
{

    srand((unsigned int)time(0));
    int lotto[45] = {};
    // 1~45 까지의 숫자를 배열에 저장
    for (int i = 0; i < 45; i++)
    {
        lotto[i] = i + 1;
    }

    // shuffle
    int temp, idx1, idx2;
    for (int i = 0; i < 100; i++)
    {
        idx1 = rand() % 45;
        idx2 = rand() % 45;

        temp = lotto[idx1];
        lotto[idx1] = lotto[idx2];
        lotto[idx2] = temp;
    }

    // shuffle 결과 출력
    for (int i = 0; i < 6; i++)
    {
        cout << lotto[i] << " ";
    }

    // 보너스 번호
    cout << "보너스 번호: " << lotto[6] << endl;

    return 0;
}