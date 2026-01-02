# Title: Security
# Difficulty: Hard

grid = input()
t_index = grid.find('T')
b_index = next((i for i in range(t_index - 1, -1, -1) if grid[i] != 'x'), -1)
n_index = next((i for i in range(t_index + 1, len(grid)) if grid[i] != 'x'), -1)
ans = grid[b_index] == '$' or grid[n_index] == '$'
print("ALARM" if ans else "quiet")
