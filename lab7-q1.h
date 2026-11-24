#ifndef LAB_Q1_H
#define LAB_Q1_H
#include <iostream>
using namespace std;
class Base{
    private:
    int Base_value{};
    public:
    Base();
    ~Base();
};

class Derived1{
    private:
    int Derived1_data{};
    public:
    Derived1();
    ~Derived1();
};
class Derived2{
    private:
    int derived2_data{};
    public:
    Derived2();
    ~Derived2();
};
#endif
