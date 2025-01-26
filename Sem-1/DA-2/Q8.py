# Write a Python program that checks if a number is within a specific range (inclusive) using logical operators.


# Algorithm
#  Step 1: Input Number, Range1 and Range2
#  Step 2: If Number >= Range1 and Number <= Range2, Display “Number is in Range”
#  Step 3: Else, Display “Number not in Range”

# Code
num = int(input("Enter a number: "))
rng1 = int(input("Enter First Number of the Range: "))
rng2 = int(input("Enter Second Number of the Range: "))
if num >= rng1 and num <= rng2:
print("Number is in range.")
else:
print("Number is not in range.")
