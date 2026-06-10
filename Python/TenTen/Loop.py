# Write a program to repeat a string input from the user and also take the repetation number from the user.

ch = input("Enter you sentence: ")
n = int(input("Enter the number of repetation: "))

for i in range(1, n+1):
    print(ch)