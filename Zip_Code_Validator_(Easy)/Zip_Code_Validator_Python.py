# Title: Zip Code Validator
# Difficulty: Easy

ans = True
s = input()
if len(s) != 5:  ans = False
elif not s.isdigit(): ans = False
print("true" if ans else "false")
