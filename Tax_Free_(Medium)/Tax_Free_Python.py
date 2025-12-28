# Title: Tax Free
# Difficulty: Medium

purchases = input().split(',')
prices = sum(float(purchase) * (1.07 if float(purchase) < 20 else 1) for purchase in purchases)
print(prices)
