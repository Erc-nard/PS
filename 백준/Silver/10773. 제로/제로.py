K=int(input())
a=[]
for i in range(K):
    n=int(input())
    if n==0:
        l=len(a)
        del a[l-1]
    else:
        a.append(n)
b=0
for c in range(len(a)):
    b+=a[c]
print(b)