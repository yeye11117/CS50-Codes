from cs50 import get_float

while True:
    cent = get_float("Change owed: ")
    if cent >= 1:
        break

cent = round(cent * 100)
count = 0

while cent >= 25:
    cent = cent - 25
    count += 1

while cent >= 10:
    cent = cent - 10
    count += 1

while cent >= 5:
    cent = cent - 5
    count += 1

while cent >= 1:
    cent = cent - 1
    count += 1

print("Total Coins: ", count)