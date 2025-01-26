#  You have a temperature in Fahrenheit (98.6°F) and need to convert it to Celsius using the formula: C=(F-32)×5/9 .


# Algorithm
#  Step 1: Input temperature in Fahrenheit
#  Step 2: Temperature in Celsius = (Temperature in Fahrenheit - 32) × 5 / 9
#  Step 3: Display Temperature in Celsius

# Code
temp_f = float(input("Enter Temperature in Fahrenheit: "))
temp_c = (temp_f - 32) * 5/9
print(f"Temperature in Celsius = {temp_c}")
