from datetime import datetime

# Title: Convert US date to EU date
# Difficulty: Medium

US_date = input()
EU_date = ""
formats = ["%m/%d/%Y", "%B %d, %Y"]
for fmt in formats:
    try:
        dt = datetime.strptime(US_date, fmt)
        EU_date = dt.strftime("%d/%m/%Y").replace("/0", "/")
        if EU_date[0] == '0': EU_date = EU_date[1:]
    except ValueError:
        continue
print(EU_date)
