# Find the volume of a cone given its diameter and height


# Algorithm
# 1) Input: Diameter of Base, Height of Cone
# 2) Logic:
# a) Radius = Diameter ÷ 2
# b) Volume = (1/3) * π * Radius * Height
# 3) Output: Volume of Cone in Cube Units

# Code
diameter = int(input("Enter Diameter of base: "))
height = int(input("Enter height of cone: "))
radius = diameter / 2
vol = (1/3) * 3.14 * radius * height
print("Volume of Cone= ", vol)
