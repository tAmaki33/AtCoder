N,M = map(int, input().split())
K = []
S = []
for m in range(M):
  row = list(map(int, input().split()))
  K.append(row[0])
  S.append(row[1:len(row)])
P = list(map(int, input().split()))

ans = 0
for bit in range(2**N):
  on = 0
  for m in range(M):
    cnt=0
    for s in S[m]:
      t = s - 1
      if (bit >> t) & 1:
        cnt+=1
    if cnt % 2 == P[m]:
      on+=1
  if on == M:
    ans+=1
print(ans)