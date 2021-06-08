A,B,K = map(int, input().split())
a = set([n for n in range(1,A+1) if A % n == 0])
b = set([n for n in range(1,B+1) if B % n == 0])
print(sorted(list(a&b))[::-1][K-1])