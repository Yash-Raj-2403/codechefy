# cook your dish here
x = int(input())
for i in range(x):
    y = int(input())
    if y <= 100:
        print(y)
    elif y <=1000:
        print(y-25)
    elif y <=5000:
        print(y-100)
    else:
        print(y-500)