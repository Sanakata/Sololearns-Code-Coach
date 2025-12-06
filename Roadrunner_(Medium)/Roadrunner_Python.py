# Title: Roadrunner
# Difficulty: Medium

s = int(input())
r = int(input())
c = int(input())
if c <= r:
    print("Meep Meep")
else:
    print("Meep Meep" if s / r < (50 // (c - r)) else "Yum")
