#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int r = 1, w, l, k, b = 1;
    float s;
    while(r!=0)
    {
        r = 1;
        cin >> r;
        if (r == 0)
            break;
        else
        {
            cin >> w >> l;
            k = (w * w) + (l * l);
            s = sqrt(k);

            if (s <= (2 * r))
                cout << "Pizza " << b << " fits on the table." << endl;
            else if (s > (2 * r))
                cout << "Pizza " << b << " does not fit on the table." << endl;
            b++;
        }
    }
}