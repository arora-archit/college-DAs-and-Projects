# To find the volume of a pyramid, given the length and breadth of its base and its height.


# Algorithm
# 1) Input: Length of base, Breadth of Base, Height of Pyramid
# 2) Logic: Volume = Length of Base * Length of Base * Height of Pyramid
# 3) Output: Volume of Pyramid in Cube Units

# Code
length = int(input("Enter length of base: "))
breadth =int(input("Enter breadth of base: "))
height = int(input("Enter height of pyramid: "))
vol = length * breadth * height
print("Volume of Pyramid= ", vol)
