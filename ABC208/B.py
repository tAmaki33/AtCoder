import math
P=int(input())
N = [math.factorial(n) for n in range(1,11)][::-1]

ans = 0
for n in N:
  while n <= P:
    ans+=1
    P -= n
print(ans)