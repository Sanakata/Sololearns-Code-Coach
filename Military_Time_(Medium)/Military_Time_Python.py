# Title: Military Time
# Difficulty: Medium

time = input().split(" ")
hours = int(time[0][0:2]) if len(time[0]) == 5 else int(time[0][0])
minutes = time[0][-2:]
hours = ("00" if time[1] == "AM" else "12") if hours == 12 else (str(hours + 12) if time[1] == "PM" else ("0" if hours < 10 else "") + str(hours))
print(f"{hours}:{minutes}")
