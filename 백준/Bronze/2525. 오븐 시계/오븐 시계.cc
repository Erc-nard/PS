#include <iostream>
using namespace std; 

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b, c, d, e;
	cin >> a >> b;
	cin >> c;
	d = (c + b) % 60; 
	e = (c + b) / 60; 
	if (a <= 23 && (a+e)<23)
	{
		if (c + b >= 60)
			cout << (a + e) << " " << d;
		if (c + b < 60)
			cout << a << " " << b + c;
	}
	else if(a <= 23 && (a + e)>= 23)
	{
		if (a + e >= 24 && c + b >= 60)
			cout << (a + e) - 24 << " " << d;
		if (a + e < 24 && c + b >= 60)
			cout << a+e << " " << d;
		if (a + e < 24 && c + b < 60)
			cout << a + e << " " << b + c;
	}
	return 0;
	
}