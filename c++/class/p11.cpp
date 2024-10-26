//We want to store the information of different vehicles. Create a class named Vehicle with two data member named mileage and price. Create its two subclasses *Car with data members to store ownership cost, warranty (by years). seating capacity and fuel type (diesel or petrol). *Bike with data members to store the number of cylinders, number of gears. cooling type(air. liquid or oil), wheel type(alloys or spokes) and fuel tank size(in inches) Make another to subclasses Audi and Ford of Car, each having a data member to store the model type. Next, make two subclasses Bajaj and TVS, each having a data member to store the make-type. Now, store and print the information of an Audi and a Ford car (i.e. model type. ownership cost. warranty, seating capacity.fuel type, mileage and price.) Do the same for a Bajaj and a TVS bike.

#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
    public:
    int mileage;
    int price;
    Vehicle(int mileage,int price)
    {
        this->mileage=mileage;
        this->price=price;
    }
};
class Car:public Vehicle
{
    public:
    int ownershipCost;
    int warranty;
    int seatingCapacity;
    string fuelType;
    Car(int mileage,int price,int ownershipCost,int warranty,int seatingCapacity,string fuelType):Vehicle(mileage,price)
    {
        this->ownershipCost=ownershipCost;
        this->warranty=warranty;
        this->seatingCapacity=seatingCapacity;
        this->fuelType=fuelType;
    }
};
class Bike:public Vehicle
{
    public:
    int numberOfCylinders;
    int numberOfGears;
    string coolingType;
    string wheelType;
    int fuelTankSize;
    Bike(int mileage,int price,int numberOfCylinders,int numberOfGears,string coolingType,string wheelType,int fuelTankSize):Vehicle(mileage,price)
    {
        this->numberOfCylinders=numberOfCylinders;
        this->numberOfGears=numberOfGears;
        this->coolingType=coolingType;
        this->wheelType=wheelType;
        this->fuelTankSize=fuelTankSize;
    }
};
class Audi:public Car
{
    public:
    string modelType;
    Audi(int mileage,int price,int ownershipCost,int warranty,int seatingCapacity,string fuelType,string modelType):Car(mileage,price,ownershipCost,warranty,seatingCapacity,fuelType)
    {
        this->modelType=modelType;
    }
};
class Ford:public Car
{
    public:
    string modelType;
    Ford(int mileage,int price,int ownershipCost,int warranty,int seatingCapacity,string fuelType,string modelType):Car(mileage,price,ownershipCost,warranty,seatingCapacity,fuelType)
    {
        this->modelType=modelType;
    }
};
class Bajaj:public Bike
{
    public:
    string makeType;
    Bajaj(int mileage,int price,int numberOfCylinders,int numberOfGears,string coolingType,string wheelType,int fuelTankSize,string makeType):Bike(mileage,price,numberOfCylinders,numberOfGears,coolingType,wheelType,fuelTankSize)
    {
        this->makeType=makeType;
    }
};
class TVS:public Bike
{
    public:
    string makeType;
    TVS(int mileage,int price,int numberOfCylinders,int numberOfGears,string coolingType,string wheelType,int fuelTankSize,string makeType):Bike(mileage,price,numberOfCylinders,numberOfGears,coolingType,wheelType,fuelTankSize)
    {
        this->makeType=makeType;
    }
};
int main()
{
    Audi a(20,2000000,200000,5,5,"diesel","A4");
    Ford f(15,1500000,150000,3,5,"petrol","Figo");
    Bajaj b(50,50000,1,4,"air","spokes",10,"Pulsar");
    TVS t(40,40000,1,4,"oil","alloys",10,"Apache");
    cout<<"Audi A4: Mileage: "<<a.mileage<<" Price: "<<a.price<<" Ownership Cost: "<<a.ownershipCost<<" Warranty: "<<a.warranty<<" Seating Capacity: "<<a.seatingCapacity<<" Fuel Type: "<<a.fuelType<<" Model Type: "<<a.modelType<<endl;
    cout<<"Ford Figo: Mileage: "<<f.mileage<<" Price: "<<f.price<<" Ownership Cost: "<<f.ownershipCost<<" Warranty: "<<f.warranty<<" Seating Capacity: "<<f.seatingCapacity<<" Fuel Type: "<<f.fuelType<<" Model Type: "<<f.modelType<<endl;
    cout<<"Bajaj Pulsar: Mileage: "<<b.mileage<<" Price: "<<b.price<<" Number of Cylinders: "<<b.numberOfCylinders<<" Number of Gears: "<<b.numberOfGears<<" Cooling Type: "<<b.coolingType<<" Wheel Type: "<<b.wheelType<<" Fuel Tank Size: "<<b.fuelTankSize<<" Make Type: "<<b.makeType<<endl;
    cout<<"TVS Apache: Mileage: "<<t.mileage<<" Price: "<<t.price<<" Number of Cylinders: "<<t.numberOfCylinders<<" Number of Gears: "<<t.numberOfGears<<" Cooling Type: "<<t.coolingType<<" Wheel Type: "<<t.wheelType<<" Fuel Tank Size: "<<t.fuelTankSize<<" Make Type: "<<t.makeType<<endl;
    return 0;
}