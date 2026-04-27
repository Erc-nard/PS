import sys
input=sys.stdin.readline

stack=[]
N=int(input())
for i in range(N):
    b=input().rstrip()
    a=list(b)
    if len(a)>=4 and a[3]=='h' and a[2]=='s':#push
        c=b.split()
        stack.append(c[1])
    elif len(a)==3 and a[2]=='p' and len(stack)!=0 and a[0]=='p':#pop1
        k=stack.pop(0)
        print(k)
    elif len(a)==3 and a[2]=='p' and len(stack)==0 and a[0]=='p':#pop2
        print('-1')
    elif len(a)==4 and a[2]=='z':#size
        print(len(stack))
    elif len(a)==5 and a[2]=='p' and a[0]=='e' :#empty
        if len(stack)==0:
            print("1")
        else:
            print('0')
    elif a[0]=='b':#back
        if len(stack)==0:
            print("-1")
        else:
            print(stack[-1])
    elif a[0]=='f':#front
        if len(stack)==0:
            print("-1")
        else:
            print(stack[0])
