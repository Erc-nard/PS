#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, X;
    cin >> N >> X;
    int * arr = new int[N];
    for (int a = N; a > 0; a--)
    {
        cin>> arr[a];
        if (arr[a] >= X)
            continue;
        else if (arr[a])
            cout << arr[a]<<" ";
    }
    return 0;
}