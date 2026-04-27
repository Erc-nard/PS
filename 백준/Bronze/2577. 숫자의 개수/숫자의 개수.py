a=int(input())
b=int(input())
c=int(input())
d=a*b*c
k=list(str(d))
k=list(map(int,k))   
for i in range(10):
    print(k.count(i))