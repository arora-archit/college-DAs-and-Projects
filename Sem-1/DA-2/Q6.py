# Write a Python program that compares two numbers and prints whether the first number is greater than, less than, or equal to the second number.


# Algorithm
#  Step 1: Input Num1, Num2
#  Step 2: If Num1 > Num2, Display “Num1 is greater than Num2”
#  Step 3: If Num1 < Num2, Display “Num1 is less than Num2”
#  Step 4: If Num1 = Num2, Display “Num1 is equal to Num2”

# Code
Num1 = int(input("Enter Number 1: "))
Num2 = int(input("Enter Number 2: "))
if Num1 > Num2:
print(f"{Num1} is greater than {Num2}")
elif Num1 < Num2:
print(f"{Num1} is less than {Num2}")
else:
print(f"{Num1} is equal to {Num2}")
