//make a class named fruit with a data member to calculate the number of fruits in a basket. Create two other classes named Apples and Mangoes to calculate the number of apples and mangoes in the basket. Print the number of fruits of each type and the total number of fruits in the basket.
// #include <iostream>
// using namespace std;
// class fruit
// {
//     public:
//     int total;
//     fruit(int total1)
//     {
//         total=total1;
//     }
//     void print()
//     {
//         cout<<"Total fruits are "<<total<<endl;
//     }
// };
// class apples:public fruit
// {
//     public:
//     int total;
//     apples(int total1):fruit(total1)
//     {
//         total=total1;
//     }
//     void print()
//     {
//         cout<<"Total apples are "<<total<<endl;
//     }
// };
// class mangoes:public fruit
// {
//     public:
//     int total;
//     mangoes(int total1):fruit(total1)
//     {
//         total=total1;
//     }
//     void print()
//     {
//         cout<<"Total mangoes are "<<total<<endl;
//     }
// };
// int main()
// {
//     apples a1(10);
//     mangoes m1(20);
//     a1.print();
//     m1.print();
//     a1.fruit::print();
//     return 0;
// }

#include<iostream>

class Fruit {
public:
    static int totalFruits;
    Fruit() {
        totalFruits++;
    }
};

int Fruit::totalFruits = 0;

class Apples : public Fruit {
public:
    static int appleCount;
    Apples() {
        appleCount++;
    }
};

int Apples::appleCount = 0;

class Mangoes : public Fruit {
public:
    static int mangoCount;
    Mangoes() {
        mangoCount++;
    }
};

int Mangoes::mangoCount = 0;

int main() {
    Apples a1, a2;
    Mangoes m1, m2, m3;

    std::cout << "Number of apples: " << Apples::appleCount << std::endl;
    std::cout << "Number of mangoes: " << Mangoes::mangoCount << std::endl;
    std::cout << "Total number of fruits: " << Fruit::totalFruits << std::endl;

    return 0;
}