#include "lab7_q3.h"
Base::Base(int a) : Base_value(a) {
    cout << "Base Constructor Called" << endl;
}

Base::Base(const Base& obj) : Base_value(obj.Base_value) {
    cout << "Base Copy Constructor Called" << endl;
}

Base& Base::operator=(const Base& obj) {
    cout << "Base Assignment Operator Called" << endl;

    if (this != &obj) {
        Base_value = obj.Base_value;
    }

    return *this;
}

Base::~Base() {
    cout << "Base Destructor Called" << endl;
}

void Base::print() {
    cout << "Base Print Function Called" << endl;
    cout << "Base Value: " << Base_value << endl;
}

void Base::setValue(int a) {
    cout << "Base SetValue Function Called" << endl;
    Base_value = a;
}

Derived1::Derived1(int a, int b)
    : Base(a), Derived1_data(b) {
    cout << "Derived1 Constructor Called" << endl;
}

Derived1::Derived1(const Derived1& obj)
    : Base(obj), Derived1_data(obj.Derived1_data) {
    cout << "Derived1 Copy Constructor Called" << endl;
}

Derived1& Derived1::operator=(const Derived1& obj) {
    cout << "Derived1 Assignment Operator Called" << endl;

    if (this != &obj) {
        Base::operator=(obj);
        Derived1_data = obj.Derived1_data;
    }

    return *this;
}

Derived1::~Derived1() {
    cout << "Derived1 Destructor Called" << endl;
}

void Derived1::print() {
    cout << "Derived1 Print Function Called" << endl;

    Base::print();

    cout << "Derived1 Data: " << Derived1_data << endl;
}

Derived2::Derived2(int a, int b, int c)
    : Derived1(a, b), derived2_data(c) {
    cout << "Derived2 Constructor Called" << endl;
}

Derived2::Derived2(const Derived2& obj)
    : Derived1(obj), derived2_data(obj.derived2_data) {
    cout << "Derived2 Copy Constructor Called" << endl;
}

Derived2& Derived2::operator=(const Derived2& obj) {
    cout << "Derived2 Assignment Operator Called" << endl;

    if (this != &obj) {
        Derived1::operator=(obj);
        derived2_data = obj.derived2_data;
    }

    return *this;
}

Derived2::~Derived2() {
    cout << "Derived2 Destructor Called" << endl;
}

void Derived2::print() {
    cout << "Derived2 Print Function Called" << endl;

    Derived1::print();

    cout << "Derived2 Data: " << derived2_data << endl;
}
