#include <iostream>
#include <vector>
using namespace std;


bool ispalin(int l, int r, const string &a){
    while(l<r){
        if(a[l]!=a[r]) return false;
        l++; r--;
    }
    return true;
}
void palin(int l,int r,const string &a){

    while(l<r){
        /* cout << l << " " << r << "\n";
        cout<<a[l]<<" "<<a[r]<<'\n'; */
        if(a[l]==a[r]){
            l++;
            r--;
        }
        else {
            if(ispalin(l+1,r,a)==true||ispalin(l,r-1,a)==true){
                cout<<"1"<<'\n'; return;
            }
            else{
                cout<<"2\n";
                return;
            }
        }

    }

    cout<<"0"<<'\n';    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    string s;

    for(int i=0;i<t;i++){
        cin>>s;
        palin(0,s.size()-1,s);
    }

}