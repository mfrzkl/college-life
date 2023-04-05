# import heapq

A, B, C, K = [(A) for A in input().split()]

_NUM = [A, B, C]

if K == 0:
    _NUM.sort(reverse=True)
    print(" ".join(map(str, _NUM)))
elif K == 1:
    _NUM.sort()
    print(" ".join(map(str, _NUM)))
else:
    print("")