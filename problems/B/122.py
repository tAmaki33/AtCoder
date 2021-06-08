S = input()
ACGT = ["A","C","G","T"]

ans = 0
T = ""
for s in S:

  if s in ACGT:
    T += s
  else :
    T = ""

  if ans < len(T):
    ans = len(T)

print(ans)