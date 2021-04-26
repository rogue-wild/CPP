#include <iostream>

using namespace std;

//Code starts here
// Pepcoding Modules:- Data Structues and Algorithm[Beginner-1]
//  Basics of Programming, Getting Started
//*************************************************************

//Print All Primes Till N

int main()
{
    int low, high;
    cin >> low >> high;

    bool prime{true};

    for (int i{2}; i <= high; i++)
    {
        if (low % i == 0)
        {
            prime = false;
            break;
        }
    }

    if (prime == true)
    {
        cout << low << endl;
        low++;
    }

    return 0;
}