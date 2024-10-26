#include<iostream>
using namespace std;
// Base class
class Animal {
public:
    void eat() {
    cout << "I can eat!" <<endl;
    }
};

// Single Inheritance
class Dog : public Animal {
public:
    void bark() {
    cout << "I can bark! Woof woof!" <<endl;
    }
};

// Multiple Inheritance
class Child;
class Father {
public:
    int height;
};

class Mother {
public:
string skinTone;
};

class Child : public Father, public Mother {};

// Multilevel Inheritance
class GrandChild : public Child {};

// Hierarchical Inheritance
class Cat : public Animal {
public:
    void meow() {
    cout << "I can meow! Meow!" <<endl;
    }
};

// Hybrid Inheritance (Combination of Hierarchical and Multiple Inheritance)
class Tiger : public Dog, public Cat {};

int main() {
    Dog d;
    d.eat();
    d.bark();

    Child c;
    c.height = 6;
    c.skinTone = "Fair";

    GrandChild gc;
    gc.height = 5;
    gc.skinTone = "Fair";

    Cat cat;
    cat.eat();
    cat.meow();

    Tiger t;
    t.bark();
    t.meow();
    return 0;
}