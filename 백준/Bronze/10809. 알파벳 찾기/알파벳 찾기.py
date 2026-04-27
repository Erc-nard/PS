S=list(input())
for k in range(97, 123):
        if chr(k) in S:
            print(S.index(chr(k)),end=' ')
        else:
            print('-1',end=' ')