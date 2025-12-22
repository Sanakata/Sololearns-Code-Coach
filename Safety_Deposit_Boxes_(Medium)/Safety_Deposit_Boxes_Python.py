# Title: Safety Deposit Boxes
# Difficulty: Medium

s = input().split(',')
target = input()
pos = s.index(target) + 1
print(pos * 5)
