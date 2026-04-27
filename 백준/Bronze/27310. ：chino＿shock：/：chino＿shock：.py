a=input()
k=0
for i in range(len(a)):
    if a[i]=="_":
        k+=5
    elif a[i]==":":
        k+=1
print(k+len(a))