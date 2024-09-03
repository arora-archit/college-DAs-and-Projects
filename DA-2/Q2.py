# A student receives scores of 85, 90, and 78 in three subjects. Calculate the average score and determine if the student passes (pass mark is 70).


# Algorithm
#  Step 1: Input marks of student.
#  Step 2: Calculate total marks.
#  Step 3: Average Marks = Total Marks ÷ 3
#  Step 4: Check if Average Marks > 70.
#  Step 5: Display if the student passed or not.

#  Code
Mark1 = int(input("Enter First Marks: "))
Mark2 = int(input("Enter Second Marks: "))
Mark3 = int(input("Enter Third Marks: "))
sum = Mark1 + Mark2 + Mark3
AverageMarks = sum / 3
if AverageMarks > 70:
print("Passed")
else:
print("Failed")
