#include "LAB7_Q4.h"

Base::Base(int v1) : value1(v1) {
    cout << "Base Constructor" << endl;
}
Base::Base(const Base& obj) : value1(obj.value1) {
    cout << "Base Copy Constructor" << endl;
}
Base& Base::operator=(const Base& obj) {
    cout << "Base Assignment Operator" << endl;

    if (this != &obj)
        value1 = obj.value1;

    return *this;
}
int Base::getValue1() const {
    cout << "Base Getter" << endl;
    return value1;
}
Base::~Base() {
    cout << "Base Destructor" << endl;
}
Derived1::Derived1(int v1, int v2)
    : Base(v1), value2(v2) {
    cout << "Derived1 Constructor" << endl;
}
Derived1::Derived1(const Derived1& obj)
    : Base(obj), value2(obj.value2) {
    cout << "Derived1 Copy Constructor" << endl;
}
Derived1& Derived1::operator=(const Derived1& obj) {
    cout << "Derived1 Assignment Operator" << endl;
    if (this != &obj) {
        Base::operator=(obj);
        value2 = obj.value2;
    }
    return *this;
}
int Derived1::getValue2() const {
    cout << "Derived1 Getter" << endl;
    return value2;
}
Derived1::~Derived1() {
    cout << "Derived1 Destructor" << endl;
}
Derived2::Derived2(int v1, int v2, int v3)
    : Derived1(v1, v2), value3(v3) {
    cout << "Derived2 Constructor" << endl;
}
Derived2::Derived2(const Derived2& obj)
    : Derived1(obj), value3(obj.value3) {
    cout << "Derived2 Copy Constructor" << endl;
}
Derived2& Derived2::operator=(const Derived2& obj) {
    cout << "Derived2 Assignment Operator" << endl;

    if (this != &obj) {
        Derived1::operator=(obj);
        value3 = obj.value3;
    }
    return *this;
}
void Derived2::setValue(int v) {
    cout << "Derived2 setValue" << endl;
    value3 = v;
}
int Derived2::getValue3() const {
    cout << "Derived2 Getter" << endl;
    return value3;
}
Derived2::~Derived2() {
    cout << "Derived2 Destructor" << endl;
}
ostream& operator<<(ostream& out, const Derived2& obj) {
    out << obj.getValue1() << " "
        << obj.getValue2() << " "
        << obj.getValue3();
    return out;
}
