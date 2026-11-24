#ifndef LAB7_Q3_H
#define LAB7_Q3_H
#include <iostream>
using namespace std;
class Base {
protected:
    int Base_value;
public:
    Base(int a);
    Base(const Base& obj);
    Base& operator=(const Base& obj);
    ~Base();
    void print();
    void setValue(int a);
};
class Derived1 : public Base {
protected:
    int Derived1_data;
public:
    Derived1(int a, int b);
    Derived1(const Derived1& obj);
    Derived1& operator=(const Derived1& obj);
    ~Derived1();
    void print();
};
class Derived2 : public Derived1 {
private:
    int derived2_data;
public:
    Derived2(int a, int b, int c);
    Derived2(const Derived2& obj);
    Derived2& operator=(const Derived2& obj);
    ~Derived2();
    void print();
};
#endif
