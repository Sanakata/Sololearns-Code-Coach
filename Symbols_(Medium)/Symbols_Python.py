# Title: Symbols
# Difficulty: Medium

s = input()
s_alphabet = "".join([ch for ch in s if ch.isalnum() or ch == ' '])
print(s_alphabet)
