#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector> 
#include <queue>
#include <stack> // built-in library for stacks
using namespace std;

int main()
{
    string line;
    getline(cin, line);


    while(line!="."){     
    int flag=0;                     
    stack <char> s;

    for(int i=0;i<line.length();i++){
        //cout<<line[i]<<'\n';
        if(line[i]=='('||line[i]=='['){
            s.push(line[i]);
        }
        if(line[i]==')'){
            if(s.empty()){
                flag=1;
                break;
            }
            else{
                if(s.top()!='('){
                    flag=1;
                    break;
                }
                s.pop();
            }
        }
        if(line[i]==']'){
            if(s.empty()){
                flag=1;
                break;
            }
            else{
                if(s.top()!='['){
                    flag=1;
                    break;
                }
                s.pop();
                }
            }


        }

        if(flag==0&&s.empty()==true) cout<<"yes\n";
        else cout<<"no\n";
        getline(cin, line);
    }
}