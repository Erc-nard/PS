a=int(input())
h=0
p=[]
b=list(map(int,input().split()))
b.sort()
for i in range(a):
    p.append(int(b[i])/int(b[a-1])*100)
for i in range(a):
    h+=float(p[i])
print(h/a)
