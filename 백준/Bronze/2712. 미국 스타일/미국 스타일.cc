#include <iostream>
#include <string>
using namespace std;
int main()
{
	double T, b;
	string c;
	cin >> T;
	for (int a = 0; a < T; a++)
	{
		cin >> b >> c;
		if (c[0] == 'k')
		{
			cout << fixed; cout.precision(4);
			cout << b * (2.2046)<<" lb"<<endl;
			
		}

		else if (c[0] == 'l')
		{
			if (c[1] == 'b')

			{
				cout << fixed; cout.precision(4);
				cout << b * (0.4536) << " kg" << endl;
			}

	
		   else
		   {
			  cout << fixed; cout.precision(4);
			  cout << b * (0.2642) << " g" << endl;
		   }
			
		}

		else if(c[0] == 'g')
		{
			cout << fixed; cout.precision(4);
			cout << b * (3.7854) << " l" << endl;
		}
			

	}
}