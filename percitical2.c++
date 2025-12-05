#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year, speed;

public:
    void setData(string m, int y, int s) {
        model = m; 
        year = y;  
         speed = s;
    }

    string getModel() { return model; }
    int getYear() { return year; }
    int getSpeed() { return speed; }
};

int main() {
    Car c;
    c.setData("Toyota", 2022, 180);

    cout << "Model: " << c.getModel()
         << "\nYear: " << c.getYear()
         << "\nSpeed: " << c.getSpeed();

    return 0;
}
