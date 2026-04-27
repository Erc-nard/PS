t=[]
for i in range(10):
    a=int(input())
    t.append(a%42)
t=set(t)
t=list(t)
print(len(t))

