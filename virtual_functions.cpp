#include <iostream>
using namespace std;

class Parent {
public:
    virtual int sum(int a, int b) {
        return a + b;
    }
};

class Child : public Parent {
public:
    int sum(int a, int b) override {
        return a + b + 10;
    }
};

int main() {
    Parent* p;
    Child c;

    p = &c;
    cout << "The sum from the Child class is: " << p->sum(5, 7) << endl;

    return 0;
}