n=int(input())
a=list(map(int,input().split()))
max=0
b=0
for i in range(len(a)):
    if a[i]!=0:
        b+=1
    elif a[i]==0:
        if b>=max:
            max=b
        b=0
if b>=max:
    max=b
print(max)