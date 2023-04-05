timeLeft = int(input())

print(timeLeft // 3600)
print((timeLeft % 3600) // 60)
print((timeLeft % 3600) % 60)