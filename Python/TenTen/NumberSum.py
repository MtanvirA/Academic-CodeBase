# write a program to print the sum of the numbers between 1 and the user specified number

num = int(input("Enter the number: "))
sum = 0

for i in range(1, num+1):
    sum = sum + i

print(sum)
