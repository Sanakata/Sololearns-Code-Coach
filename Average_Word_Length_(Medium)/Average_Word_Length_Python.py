import math

# Title: Average Word Length
# Difficulty: Medium

words = input().split()
c_alnums = 0;
for word in words:
    c_alnums += sum(c.isalnum() for c in word)
print(math.ceil(c_alnums / len(words)))
