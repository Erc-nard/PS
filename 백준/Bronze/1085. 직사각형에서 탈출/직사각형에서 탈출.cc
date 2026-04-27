#include <iostream>
using namespace std;

int main(void)
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	if (w - x >= h - y && y >= h - y && x >= h - y)
		cout << h - y;
	else if (w - x >= y && y <= h - y && x >= y)
		cout << y;
	else if (w - x <= h - y && w - x <= x && w - x <= y)
		cout << w - x;
	else if (x <= h - y && w - x >= x && x <= y)
		cout << x;
}