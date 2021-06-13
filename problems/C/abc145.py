import math
import itertools

N = int(input())
X,Y = [],[]
for n in range(N):
  tmp = list(map(int, input().split()))
  X.append(tmp[0])
  Y.append(tmp[1])

dist = []
route = list(itertools.permutations(range(N)))
for r in route:
  d = 0
  for i in range(1,len(r)):
    d += math.sqrt((X[r[i]]-X[r[i-1]])**2+(Y[r[i]]-Y[r[i-1]])**2)
  dist.append(d)
print(sum(dist)/len(route))
