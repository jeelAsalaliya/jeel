n=int(input("enter the values:"))

n1=n
sum=0
while n!=0:
    f=n%10
    sum=sum+f**3
    n=n//10
if sum==n1:
    print("number is armstrong:")
else:
    print("number is not armstrong")