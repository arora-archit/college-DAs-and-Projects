# Given two overlapping rectangles on a plane. We are given bottom left and top right points of the two rectangles. We need to find the total area (Green and pink areas in below diagram


# Algorithm
# 1) Input:
  # a) Coordinates of the bottom-left and top-right points of the green rectangle
  # b) Coordinates of the bottom-left and top-right points of the pink rectangle
# 2) Logic:
  # a) Calculate area of the whole green rectangle
  # b) Calculate area of the whole pink rectangle
  # c) Calculate excess cut area from the green rectangle
  # d) Calculate area of green region (Area of whole green rectangle – Excess Area - Area of pink rectangle)
  # e) Calculate total area of region (Area of whole green rectangle – Excess Area)
# 3) Output: Total area of Green and Pink Regions

# Code
LBG = eval(input("Enter coordinates of Left Bottom of Green rectangle in a tuple
(x,y): "))
LBP = eval(input("Enter coordinates of Left Bottom of Pink rectangle in a tuple
(x,y): "))
TRG= eval(input("Enter coordinates of Top Right of Green rectangle in a tuple
(x,y): "))
TRP = eval(input("Enter coordinates of Top Right of Pink rectangle in a tuple
(x,y): "))
AreaGreen = (TRG[0] - LBG[0]) * (TRG[1] - LBG[1])
AreaPink = (TRP[0] - LBP[0]) * (TRP[1] - LBP[1])
ExcessArea = (LBP[0] - LBG[0]) * (TRG[1] - TRP[1])
TotalAreaGreen = AreaGreen - ExcessArea - AreaPink
TotalArea = AreaGreen - ExcessArea
print("Area of Green Rectangle= ", TotalAreaGreen)
print("Area of Pink Rectangle= ", AreaPink)
print("Total Area of the Shape= ", TotalArea)
