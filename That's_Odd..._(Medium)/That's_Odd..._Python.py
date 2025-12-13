# Title: That's odd...
# Difficulty: Medium

total = 0
n = int(input())
for i in range(n):
    num = int(input())
    if num % 2 == 0: total += num;
print(total)
