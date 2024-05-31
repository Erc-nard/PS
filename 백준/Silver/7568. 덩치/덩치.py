n=int(input())

dic1=[[0, 0] for _ in range(n)] #몸무게 키
dic2=[1]*n

for i in range(n):
    x,y=map(int,input().split())
    dic1[i][0]=x
    dic1[i][1]=y

for i in range(n):
    for j in range(n):
        if(dic1[i][0]<dic1[j][0] and dic1[i][1]<dic1[j][1]): #x<p y<q일때 덩치가 크다고함,
            dic2[i]+=1 #본인보다 덩치큰사람의수:등수
print(*dic2)