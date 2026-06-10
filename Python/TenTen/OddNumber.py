# write a program to print all the odd numbers from 1 to the user specified range.

n = int(input("Enter your range: "))

for k in range(1, n+1):
    if(k%2 != 0):
        print(k)