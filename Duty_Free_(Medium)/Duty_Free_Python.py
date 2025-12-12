# Title: Duty Free
# Difficulty: Medium

nums = input().split(" ")
ans = True
for num in nums:
    if float(num) * 1.1 > 20.0:
        ans = False
        break
print("On to the terminal" if ans else "Back to the store")
