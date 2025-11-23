# Title: Kaleidoscopes
# Difficulty: Easy

kaleidoscopes = int(input())
price = round(kaleidoscopes * 5.0 * (0.9 if kaleidoscopes > 1 else 1.0) * 1.07, 2)
print(price)
