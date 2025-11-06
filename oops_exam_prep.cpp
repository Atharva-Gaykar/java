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

#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPersonInfo(string n, int a) {
        name = n;
        age = a;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class: Employee
class Employee : public Person {
private:
    string employeeID;

public:
    void setEmployeeInfo(string n, int a, string id) {
        setPersonInfo(n, a);
        employeeID = id;
    }

    void displayEmployeeInfo() {
        displayInfo();
        cout << "Employee ID: " << employeeID << endl;
    }
};

// Derived class: Boss
class Boss : public Person {
private:
    string department;

public:
    void setBossInfo(string n, int a, string dept) {
        setPersonInfo(n, a);
        department = dept;
    }

    void displayBossInfo() {
        displayInfo();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Employee e;
    Boss b;

    e.setEmployeeInfo("Rahul", 28, "E102");
    b.setBossInfo("Meena", 45, "Finance");

    cout << "\nEmployee Info:\n";
    e.displayEmployeeInfo();

    cout << "\nBoss Info:\n";
    b.displayBossInfo();

    return 0;
}