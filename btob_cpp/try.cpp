#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::endl;

int main()
{
     char vowels[]{'a', 'e', 'i', 'o', 'u'};
     cout << "\nThe first vowel is: " << vowels[0] << endl;
     cout << "The last vowel is: " << vowels[4] << endl;

     //cin>>vowels[5];
     //out of bounds:- don't do this

     vowels[1] = 'b';
     cout << vowels[1];

     cout << "Notice what the value of the array name is:" << vowels << endl; 
     //this prints the address of the array...
     
     return 0;
}