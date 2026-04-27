#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a = 0, b = 0, c = 0, v = 0, n = 0;
	cin >> a;
	int* arr = new int[a];
	for (int e = a; e > 0; e--)
	{
		cin >> c;
		arr[b] = c;
		b++;
	}
	cin >> v;

	for (int k = 0; k < a; k++)
	{
		if (v == arr[k])
			n += 1;
	}
	cout << n;
	return 0;
}