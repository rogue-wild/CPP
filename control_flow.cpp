#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // // if-else statement without the block
    // int num{0};
    // cout << "Enter a number:";
    // cin >> num;

    // if (num >= 10 && num <= 100)
    //     cout << "In range." << endl;
    // else
    //     cout << "Not in range.";

    //nested if else completed

    //Switch statement
    enum Color
    {
        red,
        green,
        blue

    };
    Color screen_color{green};

    switch (screen_color)
    {
    case red:
        cout << "red";
        break;
    case green:
        cout << "green";
        break;
    case blue:
        cout << "blue";
        break;
    default:
        cout << "should never execute";
    }

    return 0;
}