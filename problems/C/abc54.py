import itertools

N, M = map(int, input().split())
a,b = [],[]
for m in range(M):
  tmp = list(map(int, input().split()))
  a.append(tmp[0])
  b.append(tmp[1])

# N個の頂点の経路
path = list(itertools.permutations(range(1,N+1)))

ans = 0
for p in path:
  # 始点は1
  if p[0] != 1:
    continue
  
  cnt = 1
  for i in range(1,len(p)):
    # p[i-1] -> p[i]へのパスが存在するかどうか
    ex = False
    for m in range(M):
      if (p[i-1] == a[m] and p[i] == b[m]) or (p[i-1] == b[m] and p[i] == a[m]):
        ex=True
    if not ex:
      cnt-=1
  if cnt == 1:
    ans+=1
print(ans)
