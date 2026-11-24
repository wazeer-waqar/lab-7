#ifndef   LAB7_Q4_H
#define LAB7_Q4_H

#include <iostream>
using namespace std;

class Base {
protected:
    int value1{};

public:
    Base(int v1);
    Base(const Base& obj);
    Base& operator=(const Base& obj);
    int getValue1() const;
    ~Base();
};
class Derived1 : public Base {
protected:
    int value2{};
public:
    Derived1(int v1, int v2);
    Derived1(const Derived1& obj);
    Derived1& operator=(const Derived1& obj);
    int getValue2() const;
    ~Derived1();
};
class Derived2 : public Derived1 {
private:
    int value3{};
public:
    Derived2(int v1 , int v2 , int v3 );
    Derived2(const Derived2& obj);
    Derived2& operator=(const Derived2& obj);
    void setValue(int v);
    int getValue3() const;
    ~Derived2();
};

ostream& operator<<(ostream& out, const Derived2& obj);

#endif
