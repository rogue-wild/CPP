#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int area(){
    int room_width {0};
    int room_length {0};
    
    cout<<"Enter the width of the room: ";
    cin>>room_width;
    
    cout<<"Enter the length of the room: ";
    cin>>room_length;

    return room_length*room_width;

}

int main(){
    int Area {0};
    
    Area=area();
    cout<<"Area of the room is: "<<Area<<"sqm.";
   
}