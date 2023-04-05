sisi_satu = int(input("Masukkan sisi pertama : "))
sisi_dua = int(input("Masukkan sisi kedua : "))
sisi_tiga = int(input("Masukkan sisi ketiga : "))

if sisi_satu == sisi_dua == sisi_tiga:
    print("SAMA SISI")
elif sisi_satu == sisi_dua:
    print("SAMA KAKI")
elif sisi_satu == sisi_tiga:
    print("SAMA KAKI")
elif sisi_dua == sisi_tiga:
    print("SAMA KAKI")
else:
    print("SEMBARANG")