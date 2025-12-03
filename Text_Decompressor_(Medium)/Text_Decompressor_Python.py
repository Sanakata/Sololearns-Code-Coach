# Title: Text Decompressor
# Difficulty: Medium

s = input()
result_string = ""
for i in range(0, len(s), 2):
    result_string += (s[i] * int(s[i + 1]))
print(result_string)
