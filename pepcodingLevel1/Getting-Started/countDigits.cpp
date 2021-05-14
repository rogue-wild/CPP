#include <iostream>

using namespace std;

//  Code starts here
//  Pepcoding Modules:- Data Structues and Algorithm[Beginner-1]
//  Basics of Programming, Getting Started
//*************************************************************

//Count Digits In A Number

void count_digits(int num)
{
    int count = 0;
    int n = num;

    if (num == 0)
    {
        cout << count + 1;
    }
    else
    {
        while (n > 0)
        {
            count++;
            n = n / 10;
        }
        cout << count;
    }
}

int main()
{
    int num;
    cin >> num;
    count_digits(num);
}