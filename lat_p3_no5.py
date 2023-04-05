matkul = input("Masukkan mata kuliah : ")
sks = int(input("Masukkan SKS : "))
nilai = float(input("Massukan nilai mata kuliah : "))

if nilai >= 85:
    print("A")
elif nilai >= 80:
    print("A-")
elif nilai >= 75:
    print("B+")
elif nilai >= 70:
    print("B")
elif nilai >= 65:
    print("B-")
elif nilai >= 60:
    print("C+")
elif nilai >= 55:
    print("C")
elif nilai >= 40:
    print("D")
elif nilai >= 0:
    print("E")
else:
    print("T")