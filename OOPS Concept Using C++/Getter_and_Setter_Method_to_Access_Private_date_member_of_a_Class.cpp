#include<iostream>
using namespace std;
class Student {
	private:
		string name;
		int rollno;
		int marks;
    public:
//	default Constructor	
	Student() {}
// Parametreized Constructor		
		Student(string n, int r, int m)
		{
			name = n;
			rollno = r;
			marks = m;
		}
//Setter Methods to set the name, rollno, marks of a private variable
    void setName(string name1)
      {
      	name = name1;
	  }
	void setRollno(int rollno1)
	  {
	  	rollno = rollno1;
	  }
	  
	  void setMarks(int marks1)
	  {
	  	marks = marks1;
	  }
	// Getter Methods to get the value of name, rollno, marks of a private variable
	string getName()
	{
	   return name;	
	}	
	
	int getRollno()
	{
		return rollno;
	}
	
	int getMarks()
	{
		return marks;
	}
		
};

int main()
{
	Student s1;
	// Using setter method and default constructor to set the name, rollno and marks
    s1.setName("Bappy Kumar");
    s1.setRollno(1);
    s1.setMarks(80);
    
    // Using getter method  to get the name, rollno and marks
    cout<<s1.getName()<<endl;
    cout<<s1.getRollno()<<endl;
    cout<<s1.getMarks()<<endl;
    
    
	return 0;
}