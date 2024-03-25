Numbers = [8,7,7,9,8,6,10,8,10,9,8]
jumlah = 0

for i in range(0,len(Numbers),1):
    jumlah = jumlah + Numbers[i]
print("Jumlah : ", jumlah)
print("Banyak Data : ", len(Numbers))
rata = jumlah/len(Numbers)

print("Rata : ",rata)