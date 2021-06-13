N,Q = map(int,input().split())
A = list(map(int,input().split()))
K = []
for i in range(Q):
  K.append(int(input()))

ans = []
for k in K:
  t = k
  for a in A:
    if t < a:
      break
    else:
      # kより小さいaの数だけkは後ろにずれる
      t+=1
  ans.append(t)

for s in ans:
  print(s)