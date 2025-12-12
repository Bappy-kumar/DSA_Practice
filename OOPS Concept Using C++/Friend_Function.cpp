#include<iostream>
using namespace std;

class Employee {
	private:
		string empName;
		int empId;
		int esalary;
	public:	
	void setData(string empName, int empId, int esalary) {
		this->empName = empName;
		this->empId = empId;
		this->esalary = esalary;
		
	}	
	
	friend void displayEmployeeDetails(Employee e);
};

void displayEmployeeDetails(Employee e) {
	cout<<"Name: "<< e.empName << endl;
	cout<<"Employee ID: "<<e.empId<< endl;
	cout<<"Employee Salary: "<<e.esalary<<endl;
}

int main()
{
	Employee d1;
	d1.setData("Bappy", 1, 40000);
	displayEmployeeDetails(d1);
	return 0;
}