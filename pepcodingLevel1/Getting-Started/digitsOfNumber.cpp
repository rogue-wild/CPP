#include <iostream>

using namespace std;

//Code starts here
// Pepcoding Modules:- Data Structues and Algorithm[Beginner-1]
//  Basics of Programming, Getting Started
//*************************************************************

//Count Digits In A Number

void printDigit(int N)
{
    int r;

    if (N == 0)
    {
        return;
    }

    r = N % 10;

    printDigit(N / 10);

    cout << r << "\n";
}

int main()
{
    int N = 0;
    cin >> N;

    printDigit(N);
    return 0;
}