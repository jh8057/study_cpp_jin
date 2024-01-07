#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 30;
    char name[SIZE] = "안녕하세요";
    char get_name[SIZE];

    cout << name << endl;

    cin >> get_name;
    cin.getline(get_name, SIZE);

    char char1[20];
    char char2[20] = "asd";

    // char1 = char2; //error

    string str1;
    string str2 = "asd";

    str1 = str2; // ok
    return 0;
}