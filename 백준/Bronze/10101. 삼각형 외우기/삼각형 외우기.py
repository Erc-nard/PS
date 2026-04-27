a=int(input())
b=int(input())
c=int(input())
if (a+b+c!=180):
    print("Error")
elif(a+b+c==180):
    if (a!=b and b!=c and a!=c):
        print("Scalene")
    elif(a==b==c):
        print("Equilateral")
    else:
        print("Isosceles")

