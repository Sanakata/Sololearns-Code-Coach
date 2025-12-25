# Title: Isogram Detector
# Difficulty: Easy

s = input().lower()
is_isogram = len(set(s)) == len(s)
print("true" if is_isogram else "false")
