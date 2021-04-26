#include <iostream>

using namespace std;
//Code starts here
// Pepcoding Modules:- Data Structues and Algorithm[Beginner-1]
//  Basics of Programming, Getting Started
//*************************************************************

//Is a prime number

void isPrime(int num)
{
    bool prime{true};
    for (int i{2}; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            prime = false;
            break;
        }
    }

    if (prime == true)
        cout << "prime" << endl;
    else
        cout << "not prime" << endl;
}

int main()
{
    int test_case{0}, n{0};
    cin >> test_case;
    while (test_case > 0)
    {
        cin >> n;
        isPrime(n);
        test_case--;
    }

    return 0;
}
