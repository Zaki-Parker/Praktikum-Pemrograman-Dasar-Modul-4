nama = "Muhammad Zaki"

while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilihan = int(input("Masukkan Pilihan : "))

    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator " + nama)
        break
    elif pilihan < 1 or pilihan > 4:
        print("Input anda salah, silahkan coba lagi")
        continue

    a = float(input("Masukkan nilai pertama : "))
    b = float(input("Masukkan nilai kedua : "))

    if pilihan == 1:
        print("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f" % (a, b, a + b))
    elif pilihan == 2:
        print("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f" % (a, b, a - b))
    elif pilihan == 3:
        print("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f" % (a, b, a * b))
    elif pilihan == 4:
        if b == 0:
            print("Pembagian dengan nol tidak dapat dilakukan")
        else:
            print("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f" % (a, b, a / b))