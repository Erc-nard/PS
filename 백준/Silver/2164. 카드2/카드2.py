import sys
from collections import deque
input=sys.stdin.readline

n=int(input().rstrip())
a=deque(list(range(1,n+1)))
if n>1:
    for i in range(n-2):
        a.remove(a[0])
        b=a.popleft()
        a.append(b)
    print(a[1])
else:
    print("1")