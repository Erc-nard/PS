#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a;
	while (a != 0)
	{
		cin >> b >> c;
		cout << b + c<<endl;
		a--;
	}
}