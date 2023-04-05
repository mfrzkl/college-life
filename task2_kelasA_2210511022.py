import random

print("SELAMAT DATANG DI LOVEMETER")

nama_dia = input("Masukkan nama doi : ")

cocok = random.random()
print("Kecocokan anda : %.2f" % (cocok * 100), "%")

if cocok > 0.8:
    print("Anda sangat cocok dengan " + nama_dia + "!")
else:
    print("Anda tidak cocok dengan " + nama_dia + "!")