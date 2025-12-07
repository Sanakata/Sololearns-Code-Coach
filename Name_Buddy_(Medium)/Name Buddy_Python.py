# Title: Name Buddy
# Difficulty: Medium

is_found = False
f_names = input()
f_names = f_names.split(' ')
y_name = input()
for name in f_names:
    if y_name[0] == name[0]:
        is_found = True
        break
print("Compare notes" if is_found else "No such luck")
