N = int(input())
x = list(range(N+1))
y = list(range(N+1))
t = list(range(N+1))
for i in range(1,N+1):
  t[i], x[i], y[i] = map(int, input().split())

# dt = t[i+1]-t[i]
# dist = abs(x[i+1]-x[i]) + abs(y[i+1]+y[i])
# このとき dist<=dt （t+1で動ける範囲はx方向y方向のどちらかに1のため）
# dtが偶数ならばdistも偶数である
# 例.dt=2のとき、distの取りうる値は 0, 2
can = True
for i in range(N):
  dt = t[i+1] - t[i]
  dist = abs(x[i+1]-x[i]) + abs(y[i+1]-y[i])
  if dt < dist :
    can = False
  if dt % 2 != dist % 2:
    can = False

if can :
  print("Yes")
else:
  print("No")