#include<iostream>
using namespace std;
class Student {
	public:
    string name;
    int rollno;
    int marks;
};


int main()
{
	Student s;
	s.name = "Bappy Kumar";
	s.rollno = 1;
	s.marks = 80;
	
	cout<<s.name<<endl;
	cout<<s.rollno<<endl;
	cout<<s.marks<<endl;
	
	
	
	
	
	return 0;
}