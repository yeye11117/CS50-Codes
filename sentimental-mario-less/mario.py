height = int(input("Height: "))

while height > 0 and height < 9:

    for y in range(height):
        print("Q")
        for x in range(height):
            print("#", end = '')
    #break
