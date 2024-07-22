n=int(input("enter the value:"))
n1=n
sum=0

while n!=0:
    f=n%10
    sum+=f**3
    n//=10
if sum==n1:
    print("number is armstrong:")
else:
    print("number is not armstrong:")