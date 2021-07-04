N,K=map(int,input().split())
A = list(map(int,input().split()))
P = {}
for a in A:
  P[a] = 0
A = sorted(A)

x = K//N
y = K%N

for k in P.keys():
  P[k] += x

for i in range(y):
  P[A[i]]+=1

for v in P.values():
  print(v)
