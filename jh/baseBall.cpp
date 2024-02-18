#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    srand((unsigned int)time(0));

    // get random three number between 1 and 9
    // no duplicate
    int oneToNine[9] = {};
    for (int i = 0; i < 9; i++)
    {
        oneToNine[i] = i + 1;
    }

    for (int i = 0; i < 100; i++)
    {
        int idx1 = rand() % 9;
        int idx2 = rand() % 9;

        int temp = oneToNine[idx1];
        oneToNine[idx1] = oneToNine[idx2];
        oneToNine[idx2] = temp;
    }

    cout << "Baseball Game!" << endl;
    int gameEnd = 1;
    while (gameEnd)
    {
        int strike = 0;
        int ball = 0;
        int out = 0;
        int input[3] = {};

        // print oneToNine
        for (int i = 0; i < 3; i++)
        {
            cout << oneToNine[i] << " ";
        }

        cout << "\nEnter three number: ";
        cin >> input[0] >> input[1] >> input[2];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (input[i] == oneToNine[j])
                {
                    if (i == j)
                    {
                        strike++;
                    }
                    else
                    {
                        ball++;
                    }
                }
            }
        }

        if (strike == 3)
        {
            cout << "You win!" << endl;
            gameEnd = 1;
        }
        else
        {
            cout << "Strike: " << strike << " Ball: " << ball << endl;
        }

        if (input[0] == 0 || input[1] == 0 || input[2] == 0)
        {
            gameEnd = 0;
        }
    }

    return 0;
}