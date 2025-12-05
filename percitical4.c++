#include <iostream>
using namespace std;

class Device {
protected:
    string brand;
public:
    Device(string b) : brand(b) {}
    virtual double calculateDiscount() = 0; 
};

class Laptop : public Device {
public:
    Laptop(string b) : Device(b) {}
    double calculateDiscount() {
        return 1000; 
    }
};

class Smartphone : public Device {
public:
    Smartphone(string b) : Device(b) {}
    double calculateDiscount() {
        return 500;  
    }
};

int main() {
    Device* s1[2];
    s1 [0] = new Laptop("Dell");
    s1 [1] = new Smartphone("Samsung");

    for(int i=0;i<2;i++)
        cout << "Discount: " << s1[i]->calculateDiscount() << endl;

    return 0;
}
