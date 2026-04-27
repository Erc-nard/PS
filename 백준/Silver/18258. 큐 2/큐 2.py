import sys
import collections
input=sys.stdin.readline

Q=int(input())
b=collections.deque()
for i in range(Q):
    c=input().rstrip()
    a=list(c)
    if len(a)<6:
        if a[0]=="p":
            if len(b)==0:
                print("-1")
            else:
                print(b.popleft())
        elif a[0]=="s":
            print(len(b))
        elif a[0]=="e":
            if len(b)==0:
                print("1")
            else:
                print("0")
        elif a[0]=="f":
            if len(b)==0:
                    print("-1")
            else:
                print(b[0])      
        elif a[0]=="b":
                    if len(b)==0:
                            print("-1")
                    else:
                        print(b[-1])     
    else:
         x,y=map(str,c.split())
         b.append(y)
