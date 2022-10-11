from cs50 import get_float


def cal_quarter(dollar):
    quarter = 0
    while dollar >= 0.25:
        dollar = dollar - 0.25
        quarter = quarter + 1
        print(dollar)
    return quarter

# There is a rounding issue here due to the float variabel. Fix later
#Change owed: 1.33
#1.08
#0.8300000000000001
#0.5800000000000001
#0.33000000000000007
#0.08000000000000007
#5

def cal_dimes(dollar):
    dimes = 0
    while dollar >= 0.10:
        dollar = dollar - 0.10
        dimes = dimes + 1
        print(dollar)
    return dimes

while True:
    dollar = get_float("Change owed: ")
    if dollar >= 1:
        break



#x = cal_quarter(dollar)
y = cal_dimes(dollar)
print(y)