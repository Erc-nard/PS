n=int(input())

a,b=1,1
for i in range(n):
    a=a*2+(-1)**(i+1)
print(a%10007)