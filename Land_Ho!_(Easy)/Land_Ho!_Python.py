import math
# Title: Land Ho!
# Difficulty: Easy

people = int(input())
w = math.ceil((people + 1) / 20)
print((1 + 2 * (w - 1)) * 10)
