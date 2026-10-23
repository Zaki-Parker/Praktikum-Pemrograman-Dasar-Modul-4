n, k = map(int, input().split())

total = 0

for i in range(1, n + 1):
    jumlah = 0
    for j in range(i, 0, -1):
        print(f"({j} * {k})", end="")
        if j > 1:
            print(" + ", end="")
        jumlah += j * k
    print(f" = {jumlah}")
    total += jumlah

print(total)