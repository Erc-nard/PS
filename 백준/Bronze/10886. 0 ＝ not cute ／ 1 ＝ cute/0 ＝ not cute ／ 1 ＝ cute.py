n=int(input())
a,b=0,0
for i in range(n):
    c=int(input())
    if c==1:
        a+=1
    else:
        b+=1
if a>b:
    print("Junhee is cute!")
else:
    print("Junhee is not cute!")