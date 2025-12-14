#include<iostream>
using namespace std;
class Complex {
	public:
		int real;
		int img;
	Complex(int r, int i)
	{
		real = r;
		img = i;
	}	
	void showNum()
	{
		cout<<real<<"+"<<img<<"i"<<endl;
	}
	void operator +(Complex &c2) {
		int resReal = this->real + c2.real;
		int resImg = this->img + c2.img;
		
		Complex c3(resReal, resImg);
		cout<<"res = ";
		c3.showNum();
	}
	
};
int main()
{
	Complex c1(1,2);
	Complex c2(3,4);
	c1.showNum();
	c2.showNum();
	c1+c2;
    return 0;
}