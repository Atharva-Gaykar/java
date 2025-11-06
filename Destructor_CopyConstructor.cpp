// Destrutor
#include <iostream>
using namespace std;
class Car {
private:
    string brand;
    int year;
public:
    // Constructor
    Car(string b, int y) {
        brand = b;
        year = y;
        cout << "Car object created: " << brand << " (" << year << ")" << endl;
    }
    // Destructor
    ~Car() {
        cout << "Car object destroyed: " << brand << " (" << year << ")" << endl;
    }
    // Method to display car info
    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};
int main() {
    Car myCar("Toyota", 2020);
    myCar.display();
    return 0;
}

// copy constructor
#include <iostream>
using namespace std;
class A {
    int a;
public:
    // Default constructor
    A() {
        a = 0;
        cout << "Default constructor called. a = " << a << endl;
    }
    // Parameterized constructor
    A(int x) {
        a = x;
        cout << "Parameterized constructor called. a = " << a << endl;
    }
    void increase_a() {
        cout << "Before increment: a = " << a << endl;
        a++;
        cout << "After increment: a = " << a << endl;
    }
    A(const A& obj) {
        a = obj.a;
        cout << "Copy constructor called. a = " << a << endl;
    }
};
int main() {
    A obj1;        // Calls default constructor
    obj1.increase_a();
    A obj2(10);    // Calls parameterized constructor
    obj2.increase_a();
    A obj3(obj2);  // Calls copy constructor
    return 0;
}
