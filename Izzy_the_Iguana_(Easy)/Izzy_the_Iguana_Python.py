# Title: Izzy the Iguana
# Difficulty: Easy

snacks = input()
snacks_arr = snacks.split()
points = 0
scoring = {
    "Mango": 9,
    "Lettuce": 5,
    "Carrot": 4,
}
for snack in snacks_arr:
    if points > 9:
        break
    points += scoring.get(snack, 0)
print("Come on Down!" if points > 9 else "Time to wait")
