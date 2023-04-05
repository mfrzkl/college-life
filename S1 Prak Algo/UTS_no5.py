E = int(input())

_HASIL = [0, 1]

for i in range(E - 2):
    _HASIL.append(_HASIL[i] + _HASIL[i+1])

print(" ".join(map(str, _HASIL)))