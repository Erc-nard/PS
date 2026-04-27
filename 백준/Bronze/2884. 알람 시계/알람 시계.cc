#include <iostream>
using namespace std; 

int main(void)
{
	int a=1, b=1;
	cin >> a >> b;
	if ((b - 45) < 0)
		if(a>0)
			cout << (a - 1)<<" " << 60 + (b - 45);
		else
			cout << "23"<<" " << 60+ (b - 45);
	else
		cout << a<<" "<< b - 45;
}