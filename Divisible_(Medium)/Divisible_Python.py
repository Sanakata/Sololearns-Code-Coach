# Title: Divisible
# Difficulty: Medium

n = int(input())
ans = True
nums = input()
nums = nums.split(' ')
for num in nums:
    if n % int(num) != 0:
        ans = False
        break
print(("" if ans else "not " ) + "divisible by all")
