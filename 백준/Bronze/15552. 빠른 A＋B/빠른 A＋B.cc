#include <iostream>
using namespace std;


int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int a, b, c;
	cin >> a;
	while (a != 0)
	{
		cin >> b >> c;
		cout << b + c<<"\n";
		a--;
	}
}