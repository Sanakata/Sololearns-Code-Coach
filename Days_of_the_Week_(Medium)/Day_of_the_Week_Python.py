from datetime import datetime

# Title: Day of the week
# Difficulty: Medium

date_str = input()
formats = ["%m/%d/%Y", "%B %d, %Y"]
for fmt in formats:
    try:
        dt = datetime.strptime(date_str, fmt)
        print(dt.strftime("%A"))
    except ValueError:
        continue
