# write a program to take a number as input and print it's multiplication table

num = int(input("Enter a number: "))

# i = 1
# while( i<= 10):
#     print(num, " x", i, " = ", num*i)
#     i = i+1

for i in range(1, 11):
    print(num , " x ", i, " = ", num*i)
