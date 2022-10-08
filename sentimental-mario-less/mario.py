height = int(input("Height: "))

if height > 0 or height < 9:

    for y in range(height):
        print("Q")
        for x in range(height):
            print("#", end = '')
    #break
