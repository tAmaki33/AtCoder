N=int(input())
A, X, Y = [],[],[]
for n in range(N):
  t = int(input())
  ax,ay = [],[]
  for a in range(t):
    x,y = map(int, input().split())
    ax.append(x)
    ay.append(y)
  A.append(t)
  X.append(ax)
  Y.append(ay)

ans=0
for bit in range(2**N):
  cnt=0
  honest = []
  ok = True
  for n in range(N):
    # 正直者の証言を探索
    if (bit>>n) & 1:
      for j in range(A[n]):
        if Y[n][j] != (bit>>(X[n][j]-1)) & 1:
          ok = False
          break
  if ok:
    ans = max(ans, len([x for x in range(N) if bit >> x & 1]))
print(ans)