N = int(input())
print(len([n for n in range(1, N+1) if len(str(n)) % 2 == 1]))