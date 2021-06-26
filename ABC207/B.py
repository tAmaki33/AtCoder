A,B,C,D=map(int,input().split())
sum1=A
sum2=0
cnt=0
if C*D <= B:
  print(1 if A+B == C*D else -1)
else:
  while sum1 > sum2*D:
    sum1+=B
    sum2+=C
    cnt+=1
  print(cnt)