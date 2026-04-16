x=int(input())
n=int(input())

price = 0

for i in range(n):
    a,b=input().split()
    price+=int(a)*int(b)

if price == x:
    print("Yes")
else:
    print("No")
