#include <iostream>

using namespace std;

//Code starts here
// Pepcoding Modules:- Data Structues and Algorithm[Beginner-1]
//  Basics of Programming, Getting Started
//*************************************************************

//Print Fibonacci Numbers Till N
void fibonacci(int num)
{
    int a{0}, b{1};

    for (int i{1}; i <= num; i++)
    {
        cout << a << "\n";
        int fib = a + b;
        a = b;
        b = fib;
    }
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}