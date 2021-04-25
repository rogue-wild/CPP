#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int area()
{ // Function to calculate the area of the room.
    int room_width{0};
    int room_length{0};

    cout << "Enter the width of the room: ";
    cin >> room_width;

    cout << "Enter the length of the room: ";
    cin >> room_length;

    return room_length * room_width;
}

int main()
{
    int Area{0};
    // Assigning the return value of area() function to the variable area.
    Area = area();
    cout << "Area of the room is: " << Area << "sqm.";
}