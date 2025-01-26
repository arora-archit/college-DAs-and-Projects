# Write a Python program that takes an integer and the number of positions to shift from the user and performs a left bitwise shift operation. Display the result in both decimal and binary formats.


# Algorithm
#  Step 1: Input Num, Pos
#  Step 2: res = Num << Pos
#  Step 3: Display res, Binary(res)

# Code
num = int(input("Enter number: "))
pos = int(input("Enter number of position to shift: "))
res = num << pos
print(f"Result (Decimal): {res}\nResult (Binary): {bin(res)}")
