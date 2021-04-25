#include <iostream>

using std::cin;
using std::cout;

int main()
{

    //Code starts here
    // Pepcoding Modules:- Data Structues and Algorithm[Beginner-1]
    //  Basics of Programming, Getting Started
    //*************************************************************

    
    //Grading System
    int marks;
    cin>>marks;

    if (marks>90){
        cout<<"excellent";
    }

    if (marks>80 && marks<=90){
        cout<<"good";
    }
    if (marks>70 && marks<=80){
        cout<<"fair";
    }
    if (marks>60 && marks<=70){
        cout<<"meets expectations";
    }
    if (marks<=60){
        cout<<"below par";
    }

    return 0;
}
