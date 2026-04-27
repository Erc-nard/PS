n=int(input())
for i in range(1,n):
    for j in range(n-i):
        print(" ",end="")
    for j in range(2*i-1):
        print("*",end="")
    print()
print("*"*(2*n-1))
for i in range(n-1):
    for j in range(i+1):
        print(" ",end="")
    for j in range(2*(n-1-i)-1):
        print("*",end="")
    print()
