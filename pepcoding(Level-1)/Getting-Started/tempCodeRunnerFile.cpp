#include <iostream>

using std::cin;
using std::cout;

//Code starts here
// Pepcoding Modules:- Data Structues and Algorithm[Beginner-1]
//  Basics of Programming, Getting Started
//*************************************************************

//Is a prime number

void isPrime(int num)
{
    bool prime = true;

    for (int i{2}; i * i < num; i++)
    {
        if (num % i == 0)
        {
            prime = false;
            break;
        }
    }

    if (prime == false)
    {
        cout << "not prime";
    }
    else
    {
        cout << "prime";
    }
}

int main()
{
    int test_case{0};
    int n{0};
    cin >> test_case;

    while (test_case > 0)
    {
        cin >> n;
        isPrime(n);
        test_case--;
    }

    return 0;
}
