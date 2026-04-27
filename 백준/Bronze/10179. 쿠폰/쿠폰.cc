#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, c=0;
	double b;
	cin >> a;
	double* arr = new double [a] ;
	for (int k = a; k > 0; k--)
	{
		cin >> b;
		arr[c] = b;
		c++;
	}
	for (int b = 0; b < a; b++)
	{
		double t = arr[b] * 0.8;
		cout << fixed;
		cout.precision(2);
		cout << "$" << t << endl;
	}
}