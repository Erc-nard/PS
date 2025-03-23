a=[0]*5
b=0
for i in range(5):
    a[i]=int(input())
    b+=a[i]

a.sort()

print(int(b/5))
print(a[2])