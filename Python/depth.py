import sys
sys.setrecursionlimit(1000000000)
def recurse(depth):
    print(depth)
    recurse(depth + 1)

recurse(0)
