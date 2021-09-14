#include<iostream>

using namespace std;

int main() {
	// your code goes here
	int a = 1;
	int b = 2;
	int c = 0;
	int sum = 0;
	
	for(int i = 0; a<4000000; i++){
	    if( a%2 == 0){
	        sum += a;
	    }
	    
	    c = a+b;
	    a=b;
	    b=c;
	}
	cout<<sum;
	
	return 0;
}
