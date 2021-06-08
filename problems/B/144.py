N = int(input())

for i in range(1,10):
  for k in range(1,10):
    if N == i*k:
      print("Yes")
      exit()
print("No")
