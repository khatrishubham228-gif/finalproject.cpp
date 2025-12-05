#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    Student() {
        name = "";
        rollNumber = 0;
    }
   void setdata(string s,int a){
    name=s;
    rollNumber=a;

   }
    void display() {
        cout<<"name "<<name<<endl;
        cout<<"roll number "<<rollNumber<<endl;
    }
};

int main() {
    Student s1[5];
        s1[0].setdata("Amit", 101);
        s1[1].setdata("chetan", 102);
        s1[2].setdata("rakesh", 103);
        s1[3].setdata("sahil", 104);
    for(int i = 0; i < 3; i++)
    {
        s1[i].display();
    }
    return 0;
}
