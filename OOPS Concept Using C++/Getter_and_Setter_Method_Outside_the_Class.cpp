#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int rollno;
    int marks;

public:
    void setName(string name);      // declaration
    void setRollno(int rollno);     // declaration
    void setMarks(int marks);       // declaration

    string getName();               // declaration
    int getRollno();                // declaration
    int getMarks();                 // declaration
};

// DEFINITIONS OUTSIDE THE CLASS
void Student::setName(string name) {
    this->name = name;
}

void Student::setRollno(int rollno) {
    this->rollno = rollno;
}

void Student::setMarks(int marks) {
    this->marks = marks;
}

string Student::getName() {
    return name;
}

int Student::getRollno() {
    return rollno;
}

int Student::getMarks() {
    return marks;
}

int main() {
    Student s;
    s.setName("Bappy");
    s.setRollno(1);
    s.setMarks(90);

    cout << s.getName() << endl;
    cout << s.getRollno() << endl;
    cout << s.getMarks() << endl;

    return 0;
}
