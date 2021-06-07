N, Y = map(int, input().split())

for i in range(N+1):
  for k in range(N-i+1):
    if(10000*i+5000*k+1000*(N-i-k) == Y):
      print(str(i) + " " + str(k) + " " + str(N-i-k))
      exit()
print("-1 -1 -1")
