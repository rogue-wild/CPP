#include <iostream>

using namespace std;

//Code starts here
// Pepcoding Modules:- Data Structues and Algorithm[Beginner-1]
//  Basics of Programming, Getting Started
//*************************************************************

//Count Digits In A Number


void digits(long num) {
    long n = num;
    long mult = 1;
    while(n > 0) {
        n = n / 10;
        mult *= 10;
    }
    mult /= 10;
    n = num;
    while(mult != 0) {
        cout << n / mult << endl;
        n = n % mult;
        mult /= 10;
    }
}

int main(){
    long num;
    cin >> num;
    digits(num);
}