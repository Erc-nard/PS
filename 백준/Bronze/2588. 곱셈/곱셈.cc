#include <iostream>
using namespace std; 

int main(void)
{
	int a, b, c, d, e;
	cin >> a;
	cin >> b;
	c = b%10;
	d = (b/10) % 10;
	e = (b/10) / 10;
	cout << c*a << endl;
	cout << d*a << endl;
	cout << e*a << endl;
	cout << a*b;
}