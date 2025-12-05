#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;
    virtual void move() = 0;
};

class Dog : public Animal {
public:
    void sound() { cout << "Dog Barks" << endl; }
    void move() { cout << "Dog runs" << endl; }
};

class Bird : public Animal {
public:
    void  sound() { cout << "Bird Chirps" << endl; }
     void move() { cout << "Bird files" << endl; }
};

int main() {
    Animal *b[2];
    b[0] = new Dog();
    b[1] = new Bird();

     b[0]->sound();
    b[1]->move();
    b[2]->sound();
    b[3]->move();



    return 0;
}