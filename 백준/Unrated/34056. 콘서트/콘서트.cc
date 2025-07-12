#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin>>n;
    long long *arr = new long long[n]; //흡수가능 소음크기
    for(int i=0;i<n;i++){
        cin>>arr[i]; //흡수가능크기 받음
    }
    cin>>q;

    int num,c,x;
    long long lnoise,rnoise;//(왼쪽소음 오른쪽소음)
    for(int i=0;i<q;i++){ //Q번의 작업
        cin>>num;
        if(num==1){
            cin>>c>>x;
            lnoise=x;
            rnoise=x;
            for(int i=c-1;i>=0;i--){ //왼쪽, 배열은 0부터 숫자시작이라 c-1
                if(lnoise-min(arr[i],lnoise)<=0){ //전부 흡수했음
                    arr[i]+=min(arr[i],lnoise); //콘서트후 보강
                    break; //끝
                }
                else{ //흡수못해서 옆으로 넘김
                    long long aa=min(arr[i],lnoise);
                    arr[i]+=aa;
                    lnoise-=aa;
                 
                }
            }

            for(int i=c;i<n;i++){//오른쪽
                if(rnoise-min(arr[i],rnoise)<=0){ //전부 흡수했음
                    arr[i]+=min(arr[i],rnoise); //콘서트후 보강
                    break; //끝
                }
                else{ //흡수못해서 옆으로 넘김
                    long long aa=min(arr[i],rnoise);
                    arr[i]+=aa;
                    rnoise-=aa; //흡수못한만큼 다음으로 넘김
                     //보강
                }
            }
        }
        else{
            cin>>c;
            cout<<arr[c-1]<<'\n';
        }
    }

}