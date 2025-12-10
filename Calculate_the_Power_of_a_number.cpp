#include<iostream>
using namespace std;
int main()
{
	int n;
	int pow;
	cout<<"Enter the number to calculate its power: "<< endl;
	cin>> n;
	cout<<"Enter the power of a number: "<< endl;
	cin>> pow;
	int result = 1;
	for(int i=1; i<=pow; i++)
	{
		result = result * n;
	}
	cout<<result<<endl;
	return 0;
}