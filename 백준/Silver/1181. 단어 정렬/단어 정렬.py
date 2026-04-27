k=int(input())
a=[]
b=0
for i in range(k):
    n=input()
    if n in a:
        continue
    else:
        a.append(n)
        b+=1
a.sort()
a.sort(key=len)
for i in range(b):
    print(a[i])