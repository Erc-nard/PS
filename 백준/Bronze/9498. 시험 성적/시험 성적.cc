#include <iostream>
using namespace std; 

int main(void)
{
	int a=1;
	cin >> a;

	if (90 <= a )
		cout << "A";
	else if (80 <= a )
		cout << "B";
	else if (70 <= a )
		cout << "C";
	else if (60 <= a )
		cout << "D";
	else if(0 <= a )
		cout << "F";
}