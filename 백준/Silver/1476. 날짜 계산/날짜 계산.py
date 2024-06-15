e,s,m=map(int,input().split())
e1=e
if(e==15):
    e1=0
s1=s
if(s==28):
    s1=0
m1=m
if(m==19):
    m1=0
now=e
while(1):
    if((int)(now%15)==e1 and (int)(now%28)==s1 and (int)(now%19)==m1):
        break
    now+=15


print(now)
