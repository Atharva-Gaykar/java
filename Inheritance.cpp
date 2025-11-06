//Simple C++ program to demonstrate Inheritance
#include <iostream>
using namespace std;
// Base class: Rectangle
class Rectangle
{
protected:
    double width;
    double height;
public:
    // Constructor
    Rectangle(double w, double h)
    {
        width = w;
        height = h;
    }
    // Method to calculate area
    double area()
    {
        return width * height;
    }
    // Method to display dimensions
    void display()
    {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};
// Derived class: Wall
class Wall : public Rectangle
{
private:
    double paintCostPerSqMeter;
    
public:
    // Constructor for Wall, calls Rectangle constructor
    Wall(double w, double h, double cost) : Rectangle(w, h)
    {
        paintCostPerSqMeter = cost;
    }
    // Method to calculate total paint cost
    double totalPaintCost()
    {
        return area() * paintCostPerSqMeter;
    }
    // Method to display wall info
    void displayWall()
    {
        display(); // Call base class method
        cout << "Paint Cost per Sq Meter: " << paintCostPerSqMeter << endl;
        cout << "Total Paint Cost: " << totalPaintCost() << endl;
    }
};
int main()
{
    // Create a Wall object
    Wall myWall(4.0, 2.5, 150.0); // width, height, cost per sq meter
    // Display wall details
    myWall.displayWall();
    return 0;
}


// Demonstration of Multiple Inheritance in C++
#include <iostream>
using namespace std;
// Base class 1: Vehicle
class Vehicle
{
protected:
    int wheels;
public:
    Vehicle(int w)
    {
        wheels = w;
        cout << "Vehicle created with " << wheels << " wheels." << endl;
    }
    void showWheels() const
    {
        cout << "This vehicle has " << wheels << " wheels." << endl;
    }
};
// Base class 2: Engine
class Engine
{
protected:
    int horsepower;
public:
    Engine(int hp)
    {
        horsepower = hp;
        cout << "Engine created with " << horsepower << " HP." << endl;
    }
    void showEngine() const
    {
        cout << "Engine horsepower: " << horsepower << " HP" << endl;
    }
};
// Derived class: Car inherits from both Vehicle and Engine
class Car : public Vehicle, public Engine
{
private:
    string model;
public:
    Car(string m, int w, int hp) : Vehicle(w), Engine(hp)
    // the derived class constructor initializes the base classes so it should contain all the parameters required by the base class constructors
    {
        model = m;
        cout << "Car model: " << model << " initialized." << endl;
    }
    void showDetails() const
    {
        cout << "Car model: " << model << ", Wheels: " << wheels
             << ", Horsepower: " << horsepower << " HP" << endl;
    }
};
int main()
{
    Car c1("Atharva GT", 4, 250);
    c1.showDetails();
    c1.showWheels();
    c1.showEngine();
    return 0;
}


// Demonstration of Multilevel Inheritance in C++

#include <iostream>
using namespace std;
// Forward declarations
class Father;
class Child;
class Grandfather
{
protected:
    int property;
public:
    Grandfather(int p) : property(p)
    {
        cout << "Grandfather's property: ₹" << property << endl;
    }
    // Friend function declaration
    friend int calculateNetProperty(const Grandfather &gd, const Father &f, const Child &c);
};
class Father : public Grandfather
{
protected:
    int property;
public:
    Father(int gp_prop, int p) : Grandfather(gp_prop), property(p)
    {
        cout << "Father's property: ₹" << property << endl;
    }
    friend int calculateNetProperty(const Grandfather &gd, const Father &f, const Child &c);
};
class Child : public Father
{
private:
    int property;
public:
    Child(int gp_prop, int f_prop, int p) : Father(gp_prop, f_prop), property(p)
    {
        cout << "Child's property: ₹" << property << endl;
    }
    friend int calculateNetProperty(const Grandfather &gd, const Father &f, const Child &c);
};
// Friend function definition
int calculateNetProperty(const Grandfather &gd, const Father &f, const Child &c)
{
    return gd.property + f.property + c.property;
}
int main()
{
    Child c(500000, 300000, 200000); // Grandfather, Father, Child property
    int netWorth = calculateNetProperty(c, c, c);
    cout << "\nTotal inherited property by Child: ₹" << netWorth << endl;
    return 0;
}