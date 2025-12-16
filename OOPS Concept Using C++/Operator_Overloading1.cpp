#include<iostream>
using namespace std;
class Number {
	private:
		int value;
		
	public:
	
	Number(int v)
	{
		value = v;
	}
	
	void show() {
		cout<< value << endl;
	}	
	
	Number operator+(Number n) {
		return Number(value + n.value);
	}
};

int main()
{
	Number n1(5);
	Number n2(10);
	
	Number n3 = n1 + n2;
	n3.show();
	return 0;
}