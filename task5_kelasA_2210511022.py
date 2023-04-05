angka=[1000,900,500,400,100,90,50,40,10,9,5,4,1]
dict={1:"I",4:"IV",5:"V",9:"IX",10:"X",40:"XL",50:"L",90:"XC",100:"C",400:"CD",500:"D",900:"CM",1000:"M"}
angka_temp=[]
  
def konverter(no,res):
    for i in range(0,len(angka)):
        if no in angka:
            res=dict[no]
            rem=0
            break
        if angka[i]<no:
            quo=no//angka[i]
            rem=no%angka[i]
            res=res+dict[angka[i]]*quo
            break
    angka_temp.append(res)
    if rem==0:
        pass
    else:
        konverter(rem,"")

inputan = int(input("Masukkan angka yang akan dikonvert : "))

if __name__ == "__main__":
    konverter(inputan, "")
    print("".join(angka_temp))
  