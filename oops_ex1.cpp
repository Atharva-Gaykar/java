// Static members and Friend functions in C++

#include <iostream>
using namespace std;

class Counter
{
private:
    static int count; // private static member

public:
    Counter() { count++; } // modifies count internally

    // Static member functions
    static void increment() { count++; }
    static void show() { cout << "Current count: " << count << endl; }
    static int getCount() { return count; } // controlled access
};

// Definition of static member outside the class
int Counter::count = 0;

int main()
{
    Counter c1, c2; // Constructor increments count twice → count = 2
    c1.increment();
    c2.increment();
    c1.show();                   // Static call → count = 4
                                 // Output: Current count: 4
    cout << Counter::getCount(); // Output: 4
}

#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
private:
    int a1, a2;

public:
    void setA(int x, int y) {
        a1 = x;
        a2 = y;
    }

    // Declare friend function
    friend int totalSum(const A& objA, const B& objB);
};

class B {
private:
    int b1, b2;

public:
    void setB(int x, int y) {
        b1 = x;
        b2 = y;
    }

    // Declare friend function
    friend int totalSum(const A& objA, const B& objB);
};

// Friend function accessing private members of both classes
int totalSum(const A& objA, const B& objB) {
    return objA.a1 + objA.a2 + objB.b1 + objB.b2;
}

int main() {
    A aObj;
    B bObj;

    aObj.setA(3, 4);
    bObj.setB(5, 6);

    cout << "Total sum is: " << totalSum(aObj, bObj) << endl;
    return 0;
}