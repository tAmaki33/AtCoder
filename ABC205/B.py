N = int(input())
A = list(map(int,input().split()))

can = True
for i in range(1,N+1):
  if A.count(i) != 1:
    can = False
print("Yes" if can else "No")