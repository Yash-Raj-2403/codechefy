# cook your dish here
import math
x = int(input())
for i in range(x):
    a,b = map(int,input().split())
    prod = a*b
    print(math.ceil(prod/4))
    