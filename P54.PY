num=int(input("enter any number of print reverse:"))
reverse_num=0

while num!=0:
    d=num%10
    reverse_num=reverse_num*10+d
    num//=10

print("Reverse Number: " ,reverse_num)
