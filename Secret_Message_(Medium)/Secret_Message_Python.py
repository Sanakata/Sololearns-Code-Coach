# Title: Secret Message
# Difficulty: Medium

inverse = [chr(ord('z') - i) for i in range(26)]
s = input()
ans = [inverse[ord(c.lower()) - ord('a')] if c != ' ' else c for c in s]
print("".join(ans))
