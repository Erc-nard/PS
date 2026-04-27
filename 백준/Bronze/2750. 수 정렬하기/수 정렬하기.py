N=int(input())
a=[]
for i in range(N):
    k=int(input())
    a.append(k)
a.sort()
for t in range(len(a)):
    print(a[t])