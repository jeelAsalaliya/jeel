a=int(input("enter first num:"))
b=int(input("enter last num:"))

print("odd number between",a,"and",b)

for i in range(a,b+1):
    if i%2!=0:
        print(i)