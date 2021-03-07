#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int dollar_conversion()
{

    const double inr_per_usd{75.0};
    double dollars{10.0};

    cout << "\n========== Welcome to USD to INR converter ===========" << endl;
    cout << "Enter the value in USD: ";
    // cin >> dollars;

    return dollars * inr_per_usd;
}

int main()
{

    int num1{10}, num2{20}; //this is initialisation and not assingment

    num1 = 100; //here we're not saying num1 is equal to 100 but
                //we're assigning num1 the value of 100 to store at the location of num1

    cout << num1 << endl
         << num2;

    num2 = dollar_conversion();

    cout << "\nThe amount in INR is: " << num2 << endl;

    // trying out the increment and decrement operator
    int counter{0};

    counter = counter + 1;
    cout << counter << endl;

    counter++; //post increment
    cout << counter << endl;

    ++counter; //pre increment
    cout << counter << endl;

    num1 = counter;

    num2 = ++num1; // this expression means num1 = num1 + 1; then num2 = num1;

    cout << "diplaying num1 and num2 using pre increment" << endl;
    cout << num1 << endl
         << num2 << endl;

    num1 = 0;
    num2 = 0;

    num2 = num1++;
    cout << "diplaying num1 and num2 using post increment" << endl;
    cout << num1 << endl
         << num2 << endl;

    return 0;
}