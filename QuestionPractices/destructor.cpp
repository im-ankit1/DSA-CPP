#include<iostream>
using namespace std;

class person {
public:
    string name;
    int age;

    // 🔹 Parameterized constructor
    person(string n, int a) {
        name = n;
        age = a;
        cout << "Person constructor called" << endl;
    }

    ~person() {
        cout << "hi! I am person destructor" << endl;
    }
};

class student : public person {
public:
    int rollno;

    // 🔹 Parameterized constructor
    student(string n, int a, int r) : person(n, a) {
        rollno = r;
        cout << "Student constructor called" << endl;
    }

    void getinfo() {
        cout << "name : " << name << endl;
        cout << "roll no : " << rollno << endl;
        cout << "age : " << age << endl;
    }

    ~student() {
        cout << "hi! I am student destructor" << endl;
    }
};

int main() {
    // 🔹 Object banate hi constructors call honge
    student s1("ankit", 21, 23);

    s1.getinfo();

    return 0;
}
