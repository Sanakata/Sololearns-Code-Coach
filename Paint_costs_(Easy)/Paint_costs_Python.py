# Title: Paint costs
# Difficulty: Easy

number_of_colors = int(input())
total_cost = 4000 + number_of_colors * 500
tax = total_cost * 10 // 100
final_cost = (total_cost + tax + 99) // 100
print(final_cost)
