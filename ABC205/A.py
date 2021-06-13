A,B = map(int,input().split())
print(A*(B//100) if B  % 100 == 0 else A*(B/100))