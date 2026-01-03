# Title: Flowing Words
# Difficulty: Medium

ans = True
sentence = input().split()
prevCharacters = sentence[0][0]
for word in sentence:
    if word[0] != prevCharacters:
        ans = False
        break
    prevCharacters = word[-1]
print("true" if ans else "false")
