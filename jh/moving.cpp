#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool gameover;

const int width = 20;
const int height = 17;

int x, y, score;
int trashX, trashY;

enum eDirecton
{
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
}; // Controls

struct trashObj
{
    int x;
    int y;
    int speed;
};

void makeTrash(trashObj &trash)
{
    trash.x = rand() % width;
    trash.y = 0;
    trash.speed = rand() % 3 + 1;
}

eDirecton dir;

void Setup()
{
    gameover = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;

    srand(static_cast<unsigned>(time(0))); // seed for randomization
    trashX = rand() % width;               // display fruit in a random place
    trashY = 0;
    score = 0;
}

void Draw()
{
    system("cls");

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "#"; // walls

            if (i == y && j == x)
                cout << "*"; // human character
            else
            {
                bool print = false;

                if (i == trashY && j == trashX)
                {
                    cout << "%"; // change it to change the fruit
                    print = true;
                }

                if (!print)
                    cout << " ";
            }

            if (j == width - 1)
                cout << "#";
        }

        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    cout << "Score:" << score << endl;
}

void Input()
{
    char input;
    cin >> input;

    switch (input)
    {
    case 'a':
        dir = LEFT;
        break;
    case 'd':
        dir = RIGHT;
        break;
    case 'w':
        dir = UP;
        break;
    case 's':
        dir = DOWN;
        break;
    case 'x': // exit
        gameover = true;
        break;
    }
}

void algorithm()
{
    // controls
    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }

    // controls - in frame
    if (x >= width)
        x = 0;
    else if (x < 0)
        x = width - 1;

    if (y >= height)
        y = 0;
    else if (y < 0)
        y = height - 1;

    // when matching with trash, gameover
    if (x == trashX && y == trashY)
        gameover = true;

    // down trash
    trashY++;

    // when trash is out of the screen, get score and reset trash
    if (trashY >= height)
    {
        score += 10;
        trashX = rand() % width;
        trashY = 0;
    }
}

int main()
{
    Setup();

    while (!gameover)
    {
        Draw();
        Input();
        algorithm();
    }

    return 0;
}