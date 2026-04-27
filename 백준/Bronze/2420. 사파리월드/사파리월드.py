N,M=map(int, input().split())
if N>M:
    if N-M<0:
        print(-(int(N-M)))
    else:
        print(int(N-M))
else:
    if M-N<0:
        print(-int(M-N))
    else:
        print(int(M-N))
