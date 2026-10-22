multiples = int(input())
symbol = input()

for i in range (1, 51):
    if i % multiples == 0:
        print(symbol, end=" ")
    else:
        print(i, end=" ")