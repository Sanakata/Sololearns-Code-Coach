# Title: Initials
# Difficulty: Medium

initials = []
t = int(input())
for i in range(t):
    s = input()
    name = s.split(' ')
    initials.append(name[0][0] + name[1][0])
for initial in initials:
    print(initial, end=' ')
