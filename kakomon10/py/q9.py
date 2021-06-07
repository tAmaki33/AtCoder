S = input()[::-1]
wds= "dream dreamer erase eraser"[::-1].split()

p = 0
while p < len(S):
  match = False
  for wd in wds:
    if len(S) < len(wd):
      break

    if S[p:p+len(wd)] == wd:
      p += len(wd)
      match = True
  
  if not match:
    break

if p == len(S):
  print("YES")
else:
  print("NO")
