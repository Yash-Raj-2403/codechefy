# cook your dish here
import math
x = int(input())
for i in range(x):
    a,b = map(float,input().split());
    a = math.ceil(a/2)
    if a <= b:
        print("YES")
    else:
        print("NO")