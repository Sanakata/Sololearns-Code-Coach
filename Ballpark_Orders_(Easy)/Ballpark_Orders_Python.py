# Title: Ballpark Orders
# Difficulty: Easy

price = {"Nachos": 6, "Pizza": 6, "Cheeseburger": 10, "Water": 4, "Coke": 5}
orders = input().split()
print(sum(price[order] if order in price else price["Coke"] for order in orders) * 107 / 100)
