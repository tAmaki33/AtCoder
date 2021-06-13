A,B,C = map(int,input().split())
absA = abs(A)
absB = abs(B)

if (A>=0 and B>=0) or C%2==0:
  if absA == absB:
    print("=")
  elif absA > absB:
    print(">")
  else:
    print("<")
else:
  # 両方マイナス
  if A <= 0 and B <= 0:
    if absA == absB:
      print("=")
    elif absA > absB:
      print("<")
    else:
      print(">")
  # 片方マイナス
  else:
    if A < 0:
      print("<")
    else:
      print(">")
