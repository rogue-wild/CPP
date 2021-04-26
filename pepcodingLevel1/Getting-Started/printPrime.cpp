#include <iostream>

using namespace std;

//Code starts here
// Pepcoding Modules:- Data Structues and Algorithm[Beginner-1]
//  Basics of Programming, Getting Started
//*************************************************************

//Print All Primes Till N

bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void print_prime(long int low, long int high)
{

    while (low <= high)
    {
        if (is_prime(low))
            cout << low << endl;
        low++;
    }
}

int main(int argc, char **argv)
{
    long int low, high;
    cin >> low >> high;
    print_prime(low, high);
    return 0;
}