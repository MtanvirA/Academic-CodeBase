# write a program to print the sum of the odd numbers from 1 and the user specified number

num = int(input("Enter the number: "))

sum = 0

i = 1
while( i<=num ):
    if(i%2 != 0):
         sum = sum+i
    i = i+1

print("Total sum: ", sum)