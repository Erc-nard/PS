from collections import deque
import sys

n=int(sys.stdin.readline().strip())
deq=deque([])
for i in range(n):
    a=list(map(int,sys.stdin.readline().strip().split()))
    if(len(a)==2):
        if(a[0]==1):
            deq.appendleft(a[1])
        else:
            deq.append(a[1])
    else:
        if(a[0]==3):
            if(len(deq)==0):
                print("-1")
            else:
                print(deq.popleft())
        elif a[0]==4:
            if(len(deq)==0):
                print("-1")
            else:
                print(deq.pop())
        elif a[0]==5:
            print(len(deq))
        elif a[0]==6:
            if(len(deq)==0):
                print("1")
            else:
                print("0")
        elif a[0]==7:
            if len(deq)==0:
                print("-1")
            else:
                print(deq[0])
        else:
            if(len(deq)==0):
                print("-1")
            else:
                print(deq[-1])