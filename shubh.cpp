#include <iostream>
using namespace std;

class Device {
private:
    string brand;
    int powerConsumption;

public:
    void setData(string b, int p) {
        brand = b;
        powerConsumption = p;
    }

    string getBrand() {
         return brand;
     }
    int getPower() { 
        return powerConsumption;
       } 
};

class Laptop : public Device {
public:
    void display() {
        cout << "Laptop Brand: " << getBrand() <<endl;
        cout  << "Power: " << getPower() << "W\n";
    }
};

class Smartphone : public Device {
public:
    void display() {
        cout << "Smartphone Brand: " << getBrand()<<endl;
        cout  << ", Power: " << getPower() << "W\n";
    }
};

int main() {
  Laptop l1;
  l1.setData("acer",65);
 Smartphone s1;
 s1.setData("iphone",86);
 l1.display();
 s1.display();
    return 0;
}