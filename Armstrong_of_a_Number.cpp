#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number to check it is a armstrong or not: "<< endl;
	cin>>n;
    int copy = n;
    int sum =0;
    int digit;
    int count = 0;
    int temp = n;
    while(temp!=0)
    {
    	temp = temp/10;
    	count++;
	}
    while(copy!=0)
    {
    	 digit = copy%10;
    	copy = copy/10;
        sum = sum +pow(digit, count);
	}
if(sum ==  n)
	{
		cout<<"Armstrong number"<<endl;
	}
	else 
	{
		cout<<"Not a Armstorng number"<< endl;
	}
	return 0;
}