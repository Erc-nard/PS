#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int N, answer = 0,lastIdx;
    cin >> N;
    vector<int> A(N), DP(N);
    vector<int> traceback(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < N; i++)
    {
        int maxDP = 0;
        int traceIdx=-1; //현재 최대값 인덱스 저장
        for (int j = 0; j < i; j++)
        {
            if (A[j] < A[i] && maxDP < DP[j])
            {
                maxDP = DP[j];
                traceIdx=j; //최대길이일때 위치 저장
            }
        }
        DP[i] = maxDP + 1;
        traceback[i]=traceIdx;
    }
    for (int i = 0; i < N; i++)
    {
        if (answer < DP[i])
        {
            answer = DP[i];
            lastIdx=i;
        }
    }
    cout << answer<<'\n';
    stack<int> S;
    while(lastIdx>=0){
        S.push(A[lastIdx]);
        lastIdx=traceback[lastIdx];
    } //저장해뒀던 최대길이 위치 출력하려고 저장해둠

    while(!S.empty()){
        cout<<S.top()<<' ';
        S.pop(); //출력
    }
}