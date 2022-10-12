from cs50 import get_float

while True:
    dollar = get_float("Change owed: ")
    if dollar >= 1:
        break

def cal_quarter(dollar):
    quarter = 0
    while dollar >= 0.25:
        dollar = dollar - 0.25
        quarter = quarter + 1
        print(dollar)
    return quarter

def cal_dimes(dollar):
    dimes = 0
    while dollar >= 0.10:
        dollar = dollar - 0.10
        dimes = dimes + 1
        print(dollar)
    return dimes

i = cal_quarter(dollar) + cal_dimes(dollar)
#x = cal_quarter(dollar)
#y = cal_dimes(dollar)
print(i)