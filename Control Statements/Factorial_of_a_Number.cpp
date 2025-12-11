#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number to find its factorial: "<<endl;
	cin>>n;
	int fact =1;
	for(int i = 1; i<=n; i++)
	{
		fact = fact * i;
	}
	cout<<"Factorial of a number is: "<<fact<<endl;
	return 0;
}