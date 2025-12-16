# Title: Carrot Cake
# Difficulty: Medium

carrots = int(input())
boxes = int(input())
print("Cake Time" if 7 - carrots % boxes <= 0 else f"I need to buy {7 - carrots % boxes} more")
