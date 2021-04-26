#include <iostream>

using namespace std;

//Code starts here
// Pepcoding Modules:- Data Structues and Algorithm[Beginner-1]
//  Basics of Programming, Getting Started
//*************************************************************

//Count Digits In A Number
int countDigits(int num)
{
    int count{0};
    for (int i{0}; num > 0; i++)
    {
        num = num / 10;
        count++;
    }
    return count;
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    cout << countDigits(n);
    return 0;
}