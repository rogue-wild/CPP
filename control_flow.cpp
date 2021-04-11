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

    //

    // //conditional operator
    // int a{10}, b{20};
    // int score{92};
    // int result{};

    // result = (a > b) ? a : b;
    // cout << result << endl;

    // result = (a < b ? (b - a) : (a - b));
    // cout << result << endl;

    // result = (b != 0) ? (a / b) : 0; //avoiding here divide by zero error.
    // cout << result << endl;

    // cout << ((score > 90) ? "Excellent" : "Good");

    //Looping
    //  for loop
    // int i{0};

    // for (i = 1; i <= 5; ++i)
    // {
    //     cout << i << endl;
    // }

    // //ranged based for loop
    // int scores[]{100, 90, 97};

    // for (int score : scores)
    // {
    //     cout << score << endl;
    // }

    // for (auto score : scores)
    // //we don't have to explicitly provide the type of the variable
    // //instead we can use the auto keyword. This tells C++ compiler to deduce the type itself.
    // {
    //     cout << score << endl;
    // }
   
    //while loop

    // while (i >= 0)
    // {
    //     cout << i << endl;
    //     i--;
    // }

    //do-while loop
    
    int number{};

    do
    {
        cout << "Enter an integer between 1 and 5:";
        cin >> number;
    } while (number <= 1 || number >= 5);
    
    cout << "Thanks" << endl;
    
    //other loops

    //infinte loop
    //Not today bitch I'm gonna learn maths
    //arey kal toh paPer hai 

    return 0;

}