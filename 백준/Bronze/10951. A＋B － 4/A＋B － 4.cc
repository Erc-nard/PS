#include <iostream>
using namespace std;
int main(void)
{
	int a=1, b=1;
	while (1)
	{
		cin >> a >> b;
		if(cin.eof())
			break;
		else
			cout << a + b << endl;
	}
}