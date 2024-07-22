num=int(input("enter the num prime or not:"))
if num > 1:
    for i in range(2,int(num/2)+1):
        if(num%i)==0:
            print(num,'is not prime num:')
            break
    else:
        print(num,'is a prime number:')
else:
    print(num,'is a not a prime num')