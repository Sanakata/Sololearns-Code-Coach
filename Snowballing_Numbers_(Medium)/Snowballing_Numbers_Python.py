# Title: Snowballing Numbers
# Difficulty: Medium

n = int(input())
total_sum = 0
ans = True
for i in range(n):
    a = int(input())
    if total_sum >= a:
        ans = False
    total_sum += a;
print("true" if ans else "false")
