import math
N = int(input())
rN = int(math.sqrt(N))
div = [n for n in range(1, rN+1) if N % n == 0]

ans = len(str(N))
for d in div:
  ans = min(ans, max(len(str(d)), len(str(N//d))))
print(ans)