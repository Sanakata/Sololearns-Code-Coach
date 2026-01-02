# Title: Splitting Strings
# Difficulty: Medium

word = input()
step = int(input())
print("-".join([word[i:i + step] for i in range(0, len(word), step)]))
