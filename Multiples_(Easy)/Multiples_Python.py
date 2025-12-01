# Title: Multiples
# Difficulty: Easy

n = int(input())
n = n - 1
t = n // 3
f = n // 5
tf = n // 15
print(t * (3 + 3 * t) // 2 + f * (5 + 5 * f) // 2 - tf * (15 + 15 * tf) // 2)
