# Write a Python program that takes an integer from the user and computes it’s bitwise NOT. Display the result in both decimal and binary formats.


# Algorithm
#  Step 1: Input Num
#  Step 2: Compute NOT Num
#  Step 3: Display result of bitwise NOT in decimal and binary format

# Code
num = int(input("Enter number: "))
res = ~num
print(f"Result (Decimal): {res}\nResult (Binary): {bin(res)}")
