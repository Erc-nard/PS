n=int(input())
import sys

def round_1(x):
    if x%1>=0.5:
        m=int(x)+1
        return m
    else:
        m=int(x) #반올림 함수 오류나서 걍 만들음
        return m
if n!=0:    
    x=n*0.15
    k=round_1(x)

    a=[]

    for i in range(n):
        a.append(int(sys.stdin.readline()))
    a.sort()
    for t in range(k):
        a[t]=0
        a[n-1-t]=0

    y=(sum(a)/(n-(2*k)))
    b=round_1(y)
        
    print(int(b))

else:
    print("0")