// Create two classes named Mammal and MarineAnimal. Create another class named BlueWhale which inherits both the above classes. Now, create a function in each of these classes which prints "I am Mammal", "I am a Marine Animal" and "I belong to both the categories: Mammal and Marine Animal" respectively. Now, create an object for each of the above class and try calling
// 1 - function of Mammal by the object of Mammal
// 2 - function of MarineAnimal by the object of MarineAnimal
// 3 - function of BlueWhale by the object of BlueWhale
// 4 - function of each of the parent classes by the object of BlueWhale

#include <iostream>
using namespace std;
int main ()
{
    class Mammal
    {
        public:
        void print()
        {
            cout<<"I am Mammal"<<endl;
        }
    };
    class MarineAnimal
    {
        public:
        void print()
        {
            cout<<"I am a Marine Animal"<<endl;
        }
    };
    class BlueWhale:public Mammal,public MarineAnimal
    {
        public:
        void print()
        {
            cout<<"I belong to both the categories: Mammal and Marine Animal"<<endl;
        }
    };
    Mammal m1;
    MarineAnimal m2;
    BlueWhale m3;
    m1.print();
    m2.print();
    m3.print();
    //function of each of the parent classes by the object of BlueWhale
    m3.Mammal::print();
    m3.MarineAnimal::print();
    return 0;
}
