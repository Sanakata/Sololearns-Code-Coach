# Title: Missing Numbers
# Difficulty: Medium

n = int(input())
missing_numbers = []
prev = -1
for i in range(n):
    a = int(input())
    if i > 0:
        for i in range(prev + 1, a):
            missing_numbers.append(str(i))
    prev = a
print(" ".join(missing_numbers))
