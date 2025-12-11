#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the limit to which the fibonnaci number to print: "<<endl;
	cin>>n;
	int a = 0;
	int b = 1;
	int c;
	
	for(int i = 1; i<=n; i++)
	{
		 c = a+b;
		 a=b;
		 b=c;
	}
	
	
	cout<<c<<endl;
	
	
	
	return 0;
}