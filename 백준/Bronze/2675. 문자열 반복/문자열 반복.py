T=int(input())
for i in range(T):
    S=[]
    R,S=input().split()
    for k in range(len(S)):
        if k<len(S)-1:
            print(S[k]*int(R),end='')
        else:
            print(S[k]*int(R))