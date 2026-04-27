import math
n,a,b,c=map(int,input().split())
if(a!=1):
    red=(math.factorial(n)/(math.factorial(a)*math.factorial(n-a)))
else:
    red=n
n=n-a
if(b!=1):
    green=(math.factorial(n)/(math.factorial(b)*math.factorial(n-b)))
else:
    green=n
n=n-b
if(c!=1):
    blue=(math.factorial(n)/(math.factorial(c)*math.factorial(n-c)))
else:
    blue=n
print(int(red*green*blue))