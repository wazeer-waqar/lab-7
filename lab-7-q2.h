 #ifndef LAB7_Q2_H
#define LAB7_Q2_H
#include <iostream>
using namespace std;

class Base {
private:
    int Base_value{};
public:
    Base(int);
    ~Base();
    void print();
};

class Derived1 : public Base {
private:
    int Derived1_data{};
public:
    Derived1(int, int);
    ~Derived1();
    void print();
};

class Derived2 : public Derived1 {
private:
    int derived2_data{};
public:
    Derived2(int, int, int);
    ~Derived2();
    void print();
};
#endif
