def count2div(x):
  cnt = 0
  while x % 2 == 0:
    x //= 2
    cnt+=1
  return cnt

N = int(input())
A = list(map(int, input().split()))

print(min(list(map(count2div, A))))
