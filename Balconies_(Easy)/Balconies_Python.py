import sys
# Title: Balconies
# Difficulty: Easy


def solve():
    a = sys.stdin.readline().strip()
    b = sys.stdin.readline().strip()
    Aa = 1
    Ab = 1
    for s in a.split(','):
        Aa *= int(s)
    for s in b.split(','):
        Ab *= int(s)
    result = 'A' if Aa > Ab else 'B'
    print(f"Apartment {result}")


if __name__ == "__main__":
    solve()
