#include <iostream>
using namespace std;
int main(void)
{
	int t, a, b;
	cin >> t;
	for (int k = 1; k <= t;)
	{
		cin >> a >> b;
		cout << "Case #" << k << ": "<<a<<" + "<<b<<" = "<< a + b << endl;
		k++;
	}
}