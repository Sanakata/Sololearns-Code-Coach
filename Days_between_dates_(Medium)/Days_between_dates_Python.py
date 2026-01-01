from datetime import datetime

# Title: Days between dates
# Difficulty: Medium

date_str_1 = input()
date_str_2 = input()
dt_format = "%B %d, %Y"
dt_1 = datetime.strptime(date_str_1, dt_format)
dt_2 = datetime.strptime(date_str_2, dt_format)
delta = dt_2 - dt_1
print(abs(delta.days))
