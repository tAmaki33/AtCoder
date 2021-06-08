def divisor(x):
  cnt = 0
  for i in range(1, x+1):
    if x % i == 0:
      cnt+=1
  return cnt

N = int(input())
print([divisor(n) for n in range(1, N+1) if n % 2 == 1].count(8))