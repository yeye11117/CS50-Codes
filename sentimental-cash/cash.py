from cs50 import get_float


def cal_quarter(dollar):
    quarter = 0
    while dollar >= 0.25:
        dollar = dollar - 0.25
        quarter = quarter + 1
        print(dollar)
        return quarter

while True:
    dollar = get_float("Change owed: ")
    if dollar >= 1:
        break



x = cal_quarter(dollar)
print(x)