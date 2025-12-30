# Title: Credit Card Validator
# Difficulty: Medium

s = input()
sum = 0
if len(s) != 16:
    print("not valid")
else:
    for i in range(16):
        d = int(s[i]) * (2 if i % 2 == 0 else 1)
        if d > 9: d = d - 9
        sum += d;
    print(("not " if sum % 10 else "") + "valid")
