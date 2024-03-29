//make a class named fruit with a data member to calculate the number of fruits in a basket. Create two other classes named Apples and Mangoes to calculate the number of apples and mangoes in the basket. Print the number of fruits of each type and the total number of fruits in the basket.
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

class Apples {
  public:
    int apple;
    int apples () {
    cin >> apple;
    cout << "Number of Apples :" << apple <<endl;
      
      return apple;
    }
};

class Mangos {
  public:
    int mango;
    int mangos () {
    cin >> mango;
    cout << "Number of Mangos :" << mango <<endl;
      
      return mango;
    }
};

class Fruits : public Apples,public Mangos{
  public:
   void cal (int a,int b) {
    cout << "Total Number of Fruits :" << a+b <<endl;
   }
};

int main() 
{
    Fruits obj;
    obj.apples();
    obj.mangos();
    int a = obj.apple;
    int b = obj.mango;
    obj.cal(a,b);
    return 0;
}
