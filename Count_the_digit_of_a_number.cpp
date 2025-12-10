#include<iostream>
using namespace std;
int main()
{
	long long n;
	cout<<"Enter the number to count its digit: "<<endl;
	cin>>n;
	if(n == 0)
	{
		cout<<"count of a digit is : 1"<< endl;
		return 0;
	}
	
    int count = 0;
    
    while(n!=0)
    {
    	int digit = n%10;
    	n = n/10;
    	count++;
	}
	cout<<"The count of a digit is: "<<count<<endl;
	return 0;
}