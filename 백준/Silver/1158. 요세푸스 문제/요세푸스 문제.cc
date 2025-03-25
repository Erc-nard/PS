#include <iostream>
#include<queue>
using namespace std;

int main()
{
    int n,k;
    queue <int> s1;
    queue <int> s2; //결과값보관
    cin>>n>>k;
    
    for(int i=1;i<=n;i++){
        s1.push(i);
        }
    for(int i=0;i<n;i++){
        //k번째거 빼고 그앞에잇는거 뒤로넣으면 너무오래걸릴거같은데
        for(int j=0;j<k;j++){
            if(j==k-1){
                s2.push(s1.front());}
            else{
                s1.push(s1.front());}
            s1.pop();
        }
    }
    cout<<"<";
    for(int i=0;i<n;i++){
        cout<<s2.front();
        s2.pop();
        if(i!=n-1){
            cout<<", ";
        }
    }
    cout<<">";
}
