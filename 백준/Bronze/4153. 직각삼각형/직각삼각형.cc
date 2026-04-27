#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	while(true)
	{
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;
		else if (c > a && c > b && (a * a) + (b * b) == (c * c))
			cout << "right" << endl;
		else if(a > c && a > b && (c * c) + (b * b) == (a * a))
			cout << "right" << endl;
		else if (b > c && b > a && (c * c) + (a * a) == (b * b))
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
}