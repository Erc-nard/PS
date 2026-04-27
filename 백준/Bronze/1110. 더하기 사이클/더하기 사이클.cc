#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a,b,c,t,k,n=1;
	cin >> a;
	b = a % 10;
	c = a / 10;
	t = b + c;
	k = (t%10) + (b*=10);
	while (a != k)
	{
		b = k % 10;
		c = k / 10;
		t = b + c;
		k = (t%10) + (b*=10);
		n++;
	}
	cout << n;
}