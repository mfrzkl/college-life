print("Menentukan Kuadran")
print("===============================")
X = float(input("Masukkan koordinat X ?"))
Y = float(input("Masukkan koordinat Y ?"))
print("===============================")

K =[1,2,3,4]

if (X>0 and Y>0):
    print("Koordinat X dan Y berada pada kuadran", K[0])
elif (X<0 and Y<0):
    print("Koordinat X dan Y berada pada kuadran", K[1])
elif (X>0 and Y<0):
    print("Koordinat X dan Y berada pada kuadran", K[2])
elif (X<0 and Y>0):
    print("Koordinat X dan Y berada pada kuadran", K[4])
elif (X==0 and Y==0):
    print("Koordinat X dan Y merupakan titik pusat")
else:
    print("Error")