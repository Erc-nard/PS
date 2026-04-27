T=int(input())
for i in range(T):
    N=int(input())
    dic={}
    for k in range(N):
        a,b=map(str,input().split())
        dic[a]=int(b)
    dic=dict(sorted(dic.items(), key=lambda x: x[1], reverse=True))
    d=list(dic.keys())
    print(d[0])