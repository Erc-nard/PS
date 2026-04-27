#include <iostream>
using namespace std;

int main(void)
{
	int a=1,b=0,c=0,d=0,e=0;
	cin >> a;
	cin >> b;
	while (b > 0)
	{
		cin >> c >> d;
		e += (c * d);
		b--;
	}

	if (a == e)
		cout << "Yes";
	else
		cout << "No";
}