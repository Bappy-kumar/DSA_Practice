#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the number to check if it is a strong number or not: "<< endl;
   cin>>n;
   int copy = n;
   int sum = 0;
   while(copy!=0)
	{
		int digit = copy %10;
		copy = copy/10;
		int fact = 1;
		for(int i = 1; i<=digit; i++)
    {
    	fact = fact * i;
	}
	sum = sum + fact;
    }
if(sum == n)
{
	cout<<"strong number"<<endl;
}
else 
{
	cout<<"Not a strong number"<<endl;
}
return 0;
}