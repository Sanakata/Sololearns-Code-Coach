# Title: Even Numbers
# Difficulty: Medium

seq = input().split()
seq = [num for num in seq if int(num) % 2 == 0]
print(" ".join(seq))
