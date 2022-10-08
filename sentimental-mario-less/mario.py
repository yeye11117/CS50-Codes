import cs50

height = cs50.get_int("Height: ")


while height >= 1 or height <= 8:
    for y in range(height):
        print("Q")
        for x in range(height):
            print("#", end = '')
    break