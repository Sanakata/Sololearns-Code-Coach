# Title: The Spy Life
# Difficulty: Medium

s = input()
s_alphabet = [ch for ch in s if ch.isalpha() or ch == " "]
s_alphabet = "".join(s_alphabet)
print(s_alphabet[::-1])
