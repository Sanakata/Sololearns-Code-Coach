# Title: Deja Vu
# Difficulty: Medium

s = input()
print("Unique" if len(set(s)) == len(s) else "Deja Vu")
