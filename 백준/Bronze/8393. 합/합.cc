#include <iostream>
using namespace std;


int main(void)
{
	int a=1,b=0;
	cin >> a;
	while (a > 0)
	{
		b += a;
		a--;
	}
	cout << b;
}