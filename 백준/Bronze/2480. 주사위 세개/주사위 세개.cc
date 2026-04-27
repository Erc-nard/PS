#include <iostream>
using namespace std; 

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b, c, d;
	cin >> a >> b >> c;
	if (a == b && b == c)
		cout << (10000 + (a * 1000));
	else if (a == b && b!= c || a == c&& c != b)
		cout << (1000 + (a * 100));
	else if (b == c && c!= a)
		cout << (1000 + (b * 100));
	else if(b!=a&& b!=c && a!=c)
	{
		d = (a > b && a > c) ? a : (b > a && b > c) ? b : c;
		cout << d * 100;
	}	
}