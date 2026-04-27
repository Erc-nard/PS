import sys
a=sys.stdin.readline()
a=a.upper()#대문자로 바꾸기
a=list(a)
p=0
k,c=[],[]
for i in range(65, 91):
    if chr(i) in a:
        t=a.count(chr(i))#해당 문자의 개수세기
        if t>=p:
            p=t
            k.append(t)
            c.append(chr(i))
        elif t<p:
            continue
    else:
        continue
b=max(k)
if k.count(b)==1:
    print(c[k.index(b)])
else:
    print("?")