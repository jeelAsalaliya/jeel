def checkpalindrome(n):
    reverse=0
    temp=n
    while(temp!=0):
        reverse=(reverse*10)+(temp%10)
        temp=temp//10
    return(reverse==n)

n=int(input("enter any num:"))
if(checkpalindrome(n)==1):
    print("yes done")
else:
    print("no")