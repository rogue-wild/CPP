#include <iostream>

using namespace std;

//Code starts here
// Pepcoding Modules:- Data Structues and Algorithm[Beginner-1]
//  Basics of Programming, Getting Started
//*************************************************************

//Print All Primes Till N

bool is_prime(int num) {
    bool prime = true;
    for(int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    } 
    return true;
}

void print_prime(long int low, long int high) {
    bool prime;
    while(low <= high) {
        prime = is_prime(low);
        if (prime) 
            cout << low << endl;
        low++;
    }
}

int main(int argc, char **argv){
    long int low, high;
    cin >> low >> high;
    print_prime(low, high);
    return 0;

}