a=[]
b=[]
for i in range(3):
    a.append(int(input()))
a.sort()
for i in range(2):
    b.append(int(input()))
b.sort()
print(a[0]+b[0]-50)
