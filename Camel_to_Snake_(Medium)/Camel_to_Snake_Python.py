# Title: Camel to Snake
# Difficulty: Medium

s = input()
ans = [f"_{c.lower()}" if i > 0 and c.isupper() else c.lower() for i, c in enumerate(s)]
print("".join(ans))
