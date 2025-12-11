#include<iostream>
using namespace std;

int main()
{
	int n;
	int copy;

	cout<<"Enter the number: "<< endl;
	cin>> n;
	copy =n;
	int reverse = 0;
	while(copy!=0)
	{
		int digit = copy %10;
		reverse = reverse * 10 + digit;
	   copy = copy/10;
	}
	
	if( reverse == n)
	{
		cout<<"palindrome"<<endl;
	}
	else
	{
		cout<<"not palindrome"<<endl;
	}
	return 0;
}