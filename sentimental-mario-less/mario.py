height = int(input("Height: "))

while height >= 1 or height <= 8:
    for y in range(height):
        print("Q")
        for x in range(height):
            print("#", end = '')
    break