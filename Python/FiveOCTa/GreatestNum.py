a = int(input("Enter a number: "))
b =int(input("Enter a number: "))
c = int(input("Enter a number: "))
if(a>b):
    if(a>c):
        print("The greatest number is :",a)
    else:
        print("The greatest number is: ",c)
else:
    if(b>c):
        print("The greatest number is: ",b)

    else:
        print("The greatest number is: ",c)  