height = int(input("Height: "))

if height == 1 or 8:


    for y in range(height):
        print("Q")
        for x in range(height):
            print("#", end = '')

else:
    height