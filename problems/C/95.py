A,B,C,X,Y = map(int, input().split())
ans = A*X+B*Y
c = 2
while c//2 <= max(X,Y):
  x = (X-c//2) if (X-c//2) > 0 else 0
  y = (Y-c//2) if (Y-c//2) > 0 else 0
  ans = min(ans, C*c+A*x+B*y)
  c+=2
print(ans)