# Write a Python program that demonstrates the use of bitwise AND, OR, and XOR operators on two integers.


# Algorithm
#  Step 1: Input Num1, Num2
#  Step 2: Compute Num1 AND Num2
#  Step 3: Compute Num1 OR Num2
#  Step 4: Compute Num1 XOR Num2
#  Step 5: Display the results of AND, OR, and XOR operations.

# Code
num1 = int(input("Enter number 1: "))
num2 = int(input("Enter number 2: "))
and_res = num1 & num2
or_res = num1 | num2
xor_res = num1 ^ num2
print(f"Bitwise AND of {num1} and {num2}: {and_res}")
print(f"Bitwise OR of {num1} and {num2}: {or_res}")
print(f"Bitwise XOR of {num1} and {num2}: {xor_res}")
