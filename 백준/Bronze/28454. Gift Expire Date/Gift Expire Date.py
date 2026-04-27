a=input()

a=int(a.replace("-",""))

c=0

N=int(input())

for i in range(N):

 b=input()

 b=int(b.replace("-",""))

 if b>=a:

     c=c+1

print(c)

