# cook your dish here
x = int(input())
for i in range(x):
    a,b,c,d = map(int , input().split())
    sum = a+b+c+d
    if sum == 0:
        print("IN")
    else:
        print("OUT")