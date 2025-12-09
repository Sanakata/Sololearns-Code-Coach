# Title: Password Validation
# Difficulty: Hard

s = input()
is_minimum_length = len(s) > 6;
c_digits = sum(c.isdigit() for c in s)
c_special_characters = sum(not c.isalnum() for c in s)
print("Strong" if is_minimum_length and c_digits > 1 and c_special_characters > 1 else "Weak")
