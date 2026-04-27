import sys
input=sys.stdin.readline

N=int(input())
a=[]
for i in range(N):
    b=list(map(int,input().split()))
    if b[0]==1:
        a.append(b[1]) 
    elif b[0]==2:
        if len(a)==0:
            print("-1")
        else:
            print(a.pop())
    elif b[0]==3:
        print(len(a))
    elif b[0]==4:
        if len(a)==0:
            print("1")
        else:
            print("0")
    elif b[0]==5:
        if len(a)==0:
            print("-1")
        else:
            print(a[-1])