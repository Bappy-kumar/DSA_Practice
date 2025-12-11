#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the limit upto which calculate sum: "<<endl;
	cin>>n;
	int sum = 0;
    for(int i = 1; i<=n; i++)
	{
		sum = sum + i;
	}
	
	cout<<"Sum of N natural numbers is: "<<sum<<endl;
	return 0;
}