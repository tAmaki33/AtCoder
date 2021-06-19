N=int(input())
A=list(map(int,input().split()))
ans=N*(N-1)//2
a = sorted(A)

d = dict()
for i in range(N):
  if a[i] in d:
    d[a[i]]+=1
  else:
    d[a[i]]=1

cnt = 0
for v in d.values():
  cnt += v*(v-1)//2

print(ans-cnt)