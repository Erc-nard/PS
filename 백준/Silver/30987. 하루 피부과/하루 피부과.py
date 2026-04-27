import math
x,y=map(int,input().split())
a,b,c,d,e=map(int,input().split())
k=(a/3)*(math.pow(y,3))+((b-d)/2)*(math.pow(y,2))+(c-e)*y
d=(a/3)*(math.pow(x,3))+((b-d)/2)*(math.pow(x,2))+(c-e)*x
print(int(k-d))

