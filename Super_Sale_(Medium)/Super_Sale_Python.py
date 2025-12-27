import math

# Title: Super Sale
# Difficulty: Medium

items = input().split(',')
items = [float(item) for item in items]
items.sort(reverse=True)
ans = sum(items[i] * 0.3 for i in range(1, len(items))) * 1.07
print(math.floor(ans))
