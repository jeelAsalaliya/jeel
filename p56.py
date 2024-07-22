sum=0

print("enter any 10 numbers::")

for i in range(1,11):
    num=int(input("enter num %d="%i))
    sum+=num

avg=sum/10

print("the sum of 10 numbesr=",sum)
print("the average of 10 numbers",avg)