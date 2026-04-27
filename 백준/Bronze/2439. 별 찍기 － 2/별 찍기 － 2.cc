#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a = 0;
	cin >> a;
	for(int c=a-1;c>=0;c--)
	{	
		for (int d=c ; d> 0; d--)
			cout << " ";
		for (int b = c; b < a; b++)
			cout << "*"; 

			cout << endl;		
	}
}