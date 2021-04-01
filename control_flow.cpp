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
/*
Enumerated type (enumeration) is a user-defined data type which can be assigned some limited values. 
These values are defined by the programmer at the time of declaring the enumerated type.

#include <bits/stdc++.h>
using namespace std;

// Defining enum Year
enum year {
	Jan,
	Feb,
	Mar,
	Apr,
	May,
	Jun,
	Jul,
	Aug,
	Sep,
	Oct,
	Nov,
	Dec
};

// Driver Code
int main()
{
	int i;

	// Traversing the year enum
	for (i = Jan; i <= Dec; i++)
		cout << i << " ";

	return 0;
}
Output: 
0 1 2 3 4 5 6 7 8 9 10 11

    */
   
   enum Color //this is an enumeration in this we gave a name to a constant integer
    //like here the red is 1, green is 2 and so on...
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