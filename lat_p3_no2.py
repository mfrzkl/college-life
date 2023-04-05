matkul1 = int(input("Masukkan Nilai Mata Kuliah 1 : "))
matkul2 = int(input("Masukkan Nilai Mata Kuliah 2 : "))
matkul3 = int(input("Masukkan Nilai Mata Kuliah 3 : "))

if matkul1 and matkul2 and matkul3 >= 60:
    print("TIGA")
elif matkul1 and matkul3 >= 60:
    print("DUA")
elif matkul2 and matkul3 >= 60:
    print("DUA")
elif matkul2 and matkul1 >= 60:
    print("DUA")
elif matkul1 >= 60:
    print("SATU")
elif matkul2 >= 60:
    print("SATU")
elif matkul3 >= 60:
    print("SATU")
else:
    print("NOL")
