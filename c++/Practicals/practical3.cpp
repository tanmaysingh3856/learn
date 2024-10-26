//Create a class named Room with three data members length (int), breadth (int) and height (int). Assign values to data members in main function. Define and use member functions calculateArea() and calculateVolume() to display the area and volume of the room.
#include <iostream>
using namespace std;
class Room
{
    public:
    int length, breadth, height;
    void calculateArea()
    {
        cout<<"Area of the room = "<<length*breadth<<endl;
    }
    void calculateVolume()
    {
        cout<<"Volume of the room = "<<length*breadth*height<<endl;
    }
};
int main()
{
    Room r;
    r.length=10;
    r.breadth=20;
    r.height=30;
    r.calculateArea();
    r.calculateVolume();
    return 0;
}