b=int(input())
b=list(map(int,input().split()))
b.sort()
if(len(b)>1):
        print(b[0]*b[-1])
else:
        print(b[0]*b[0])