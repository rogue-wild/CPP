 #include<iostream>
 #include<vector>

 using std::cout;
 using std::cin;
 using std::endl;
 using std::vector;

int main(){

vector <char> vowels {'a','e'};
vector <int> test_scores (100,0); //100 ints initialized at 0. 
vector <int> testScore {100, 50, 40, 30, 10};

cout<<"The first score is: "<<testScore[0]<<endl;
cout<<"The second score is: "<<testScore.at(1)<<endl;

testScore.at(1) = 90;

cout<<"The second score is: "<<testScore.at(1)<<endl;

testScore.push_back(50); //"push_back" methods adds an desired element at the last of the vector...

for(int i {0}; i<6; i++){

  cout<<testScore.at(i)<<endl;
}

return 0;

 }