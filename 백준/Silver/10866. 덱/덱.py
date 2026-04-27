from collections import deque
import sys

n=int(sys.stdin.readline())
deq=deque([])

for i in range(n):
    a=list(map(str,sys.stdin.readline().split()))
    if(len(a)==1):
        if(a[0]=="pop_front"):
            if(len(deq)==0):
                print("-1")
            else:
                print(deq.popleft())
        elif(a[0]=="pop_back"):
            if(len(deq)==0):
                print("-1")
            else:
                print(deq.pop())
        elif(a[0]=="size"):
            print(len(deq))
        elif(a[0]=="empty"):
            if(len(deq)==0):
                print("1")
            else:
                print("0")
        elif(a[0]=="front"):
            if(len(deq)==0):
                print("-1")
            else:
                print(deq[0])
        elif(a[0]=="back"):
            if(len(deq)==0):
                print("-1")
            else:
                print(deq[-1])
    else:
        if(a[0]=="push_front"):
            deq.appendleft(a[1])
        else:
            deq.append(a[1])