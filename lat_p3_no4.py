print("ADA DISKON UNTUK JENIS BARANG TERTENTU!")
print("\nJENIS BARANG A DISKON 10%")
print("JENIS BARANG B DISKON 15%")
print("JENIS BARANG C DISKON 20%")

#declare input variable
code = int(input("\nMasukkan kode barang : "))
type = input("Masukkan jenis barang (A-Z): ")
cost = int(input("Masukkan harga barang : "))

#Declare array list of discount precentage
DC = [10,15,20]

#if type input is A
if type == "A" or "a":
    sum = cost * DC[0]/100 #1000 
    sum_dsc = int(cost - sum)    #cost after discount
    print("Jenis barang", type, "mendapat diskon", DC[0],"%, " "harga setelah diskon = ", sum_dsc)
#if type input is B
elif type == "B" or "a":
    sum = cost * DC[1]/100
    sum_dsc = int(cost - sum)
    print("Jenis barang", type, "mendapat diskon", DC[1],"%, " "harga setelah diskon = ", sum_dsc)
#if type input is C
elif type == "C" or "a":
    sum = cost * DC[2]/100
    sum_dsc = int(cost - sum)
    print("Jenis barang", type, "mendapat diskon", DC[2],"%, " "harga setelah diskon = ", sum_dsc)
#if type input is not on the discount list
else:
    print("Jenis barang", type, "tidak mendapat diskon, harga normal", cost)
