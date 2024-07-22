a=int(input("enter first num:"))
b=int(input("enter second num:"))

print("odd number",a,"and",b)

for i in range(a,b+1):
    if i%2!=0:
        print(i)
        