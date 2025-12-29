# Title: CMYK to RGB
# Difficulty: Medium

rgb = []
inputs = [float(input()) for i in range(4)]
c, m, y, k = inputs
rgb = [round(255 * (1 - color) * (1 - k)) for color in (c, m, y)]
print(*(rgb), sep=",")
