# Title: Hofstadter's Q-Sequence
# Difficulty: Hard

hof_seq = [1, 1, 1]
n = int(input())
for i in range(3, n + 1): hof_seq.append(hof_seq[i - hof_seq[i - 1]] + hof_seq[i - hof_seq[i - 2]])
print(hof_seq[n])
