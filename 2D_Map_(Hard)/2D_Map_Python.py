# Title: 2D Map
# Difficulty: Hard

x = []
y = []
grid = input().split(',')
for i in range(5):
    for j in range(5):
        if grid[i][j] == 'P':
            x.append(j)
            y.append(i)
print(abs(x[0] - x[1]) + abs(y[0] - y[1])
