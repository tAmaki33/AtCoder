import itertools

N = int(input())
P = "".join(input().split())
Q = "".join(input().split())

ls = list(itertools.permutations(range(1,N+1)))

a,b = 0,0
for i in range(len(ls)):
  if "".join(map(str,ls[i])) == P:
    a = i
  
  if "".join(map(str,ls[i])) == Q:
    b = i
print(abs(a-b))