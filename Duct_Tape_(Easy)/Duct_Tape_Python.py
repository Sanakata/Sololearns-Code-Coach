import math
# Title: Duct Tape
# Difficulty: Easy

height, width = map(int, input().split())
print(math.ceil(height * width / 5))
