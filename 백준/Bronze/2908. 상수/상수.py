a,b=map(int,input().split())
k=int((a%10)*100+(a%100-a%10)+(a/100))
j=int((b%10)*100+(b%100-b%10)+(b/100))
if k>j:
    print(k)
else:
    print(j)

