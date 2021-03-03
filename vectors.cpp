 #include<iostream>
 #include<vector> //have to use vector preprocessor

 using std::cout;
 using std::cin;
 using std::endl;
 using std::vector; //have to use the standard namespace 

int main(){
vector <char> vowel; // empty vector initialized at 0(vectors automatically initialize at 0).
vector <char> vowels {'a','e'};
vector <int> test_scores (100,0); //100 ints initialized at 0. 
vector <int> testScore {100, 50, 40, 30, 10}; //all are initialized. 

cout<<"The first score is: "<<testScore[0]<<endl; //using the array syntax(not bound checking)
cout<<"The second score is: "<<testScore.at(1)<<endl; 
//using the "at" method and dot(.) operator (this one is bound checked)

testScore.at(1) = 90; // assigning vector element some other value

cout<<"The second score is: "<<testScore.at(1)<<endl;

testScore.push_back(50); //"push_back" methods adds an desired element at the last of the vector...

for(int i {0}; i < 6; i++){

  cout<<testScore.at(i)<<endl;
}

cout<<"Size of the vector testScore: "<<testScore.size()<<endl;

for(int i {0}; i < testScore.size(); i++){
// using the "size" method to iterate through the vector.
  cout<<testScore.at(i)<<endl;
}

return 0;

 }