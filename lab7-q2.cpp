#include "lab7_q2.h"
Base::Base(int a) : Base_value(a) {
    cout << "Base Constructor Called" << endl;
}
Base::~Base() {
    cout << "Base Destructor Called" << endl;
}
void Base::print() {
    cout << "Base Value: " << Base_value << endl;
}
Derived1::Derived1(int a, int b)
    : Base(a), Derived1_data(b) {
    cout << "Derived1 Constructor Called" << endl;
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
Derived2::~Derived2() {
    cout << "Derived2 Destructor Called" << endl;
}
void Derived2::print() {
    cout << "Derived2 Print Function Called" << endl;
    Derived1::print();
    cout << "Derived2 Data: " << derived2_data << endl;
}
