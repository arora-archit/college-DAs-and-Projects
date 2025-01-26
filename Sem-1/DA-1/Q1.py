# To find the average speed of a car given the journey time and the distance travelled

# Algorithm
# 1) Input: Distance traveled (in kilometers or miles), Time Taken (in hours).
# 2) Logic: Average Speed = Distance traveled ÷ Time Taken
# 3) Output: Average Speed in Kilometers per hour or Miles per hour

# Code
distance = int(input("Enter distance traveled (Km): "))
time = int(input("Enter time taken (hours): "))
avg = distance / time
print("Average speed = ", avg)
