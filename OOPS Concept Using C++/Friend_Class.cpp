#include<iostream>
using namespace std;
class Employee
{
	private:
		string eName;
		int eId;
		int eSalary;
	public:
	void setEmployeeData(string eName, int eId, int eSalary) {
		this->eName = eName;
		this->eId = eId;
		this->eSalary = eSalary;
	}	
   friend class EmployeeInfo;
};
class EmployeeInfo {
	public:
		void print(Employee e) {
			cout<< "Name: " <<e.eName<<endl;
			cout<< "Employee ID: "<<e.eId<<endl;
			cout<<"Employee Salary: "<<e.eSalary<<endl;
		}
};
int main()
{
	Employee s1;
	s1.setEmployeeData("Bappy", 1, 50000);
    EmployeeInfo e1;
	e1.print(s1);
	return 0;
}