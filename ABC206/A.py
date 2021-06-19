import math

N=int(input())
n = math.floor(1.08*N)
if n == 206:
  print("so-so")
elif n < 206:
  print("Yay!")
else:
  print(":(")