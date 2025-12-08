# Title: It's a Sign
# Difficulty: Hard

is_palindrome_found = False
for i in range(4):
    sign = input()
    if sign == sign[::-1]:
        is_palindrome_found = True
print("Open" if is_palindrome_found else "Trash")
