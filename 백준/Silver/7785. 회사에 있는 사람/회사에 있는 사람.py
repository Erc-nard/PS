import sys
input=sys.stdin.readline

n=int(input())
c=set()
for i in range(n):
    a=list(map(str,input().split()))
    if a[1]=="enter":
        c.add(a[0])
    elif a[1]=="leave":
        c.remove(a[0])
c=list(c)
c.sort(reverse=True)
for i in range(len(c)):
    print(c[i])
