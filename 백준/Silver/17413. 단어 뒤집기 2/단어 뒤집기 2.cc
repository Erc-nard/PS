#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){

    string S;
    getline(cin,S);
    queue <char> s1;
    stack <char> revers;


    //공백까지가 한단어, 태그걸린건 그냥 넘어가기
    for(int i=0;i<S.length();i++){

        if(S[i]=='<'){
            while(!revers.empty()){
                s1.push(revers.top());
                revers.pop(); ///reverse에 있는거 일단 넘기고
            }
            while (S[i]!='>'&&i<S.length()) { //태그그대로로
                s1.push(S[i++]);
            }
            s1.push(S[i]);
            continue;
        }
        
        if(S[i]==' '){

            while(!revers.empty()){
                s1.push(revers.top());
                revers.pop();
            }
            s1.push(S[i]); //얘도 revers에 넣으면 나중에 다시 뒤바뀜 
        }

        else revers.push(S[i]); 
    }

    //마지막단어
    while(!revers.empty()){
        s1.push(revers.top());
        revers.pop();
    }

    while(!s1.empty()){
        cout<<s1.front();
        s1.pop();
    }
}