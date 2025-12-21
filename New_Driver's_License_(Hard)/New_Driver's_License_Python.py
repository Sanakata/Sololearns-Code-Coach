import sys
import math

# Title: New Driver's License
# Difficulty: Hard

yName = input()
agents = int(input())
queue = sorted(input().split() + [yName])
index = queue.index(yName) + 1
print(math.ceil(index / agents) * 20)
