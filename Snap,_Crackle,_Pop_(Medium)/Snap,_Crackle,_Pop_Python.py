# Title: Snap, Crackle, Pop
# Difficulty: Medium

for i in range(6):
    n = int(input())
    print("Pop" if n % 3 == 0 else "Snap" if n % 2 == 1 else "Crackle", end=' ')
