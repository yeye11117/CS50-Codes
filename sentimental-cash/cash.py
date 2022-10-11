from cs50 import get_float

def get_cents():
    while True:
        cent = get_float("Change owed: ")
        if cent <= 1:
            break

#def main():

#if __name__ == ("__main__"):
   # main()