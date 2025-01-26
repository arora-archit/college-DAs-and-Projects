# An employee earns a base salary of $3,000 and receives a bonus of 10% of the base salary. Calculate the total monthly salary.


# Algorithm
#  Step 1: Input Base Salary and Bonus Percentage
#  Step 2: Bonus = (Bonus Percentage / 100)* Base Salary
#  Step 3: Total Salary = Base Salary + Bonus
#  Step 4: Display Total Salary

# Code
Base_Salary = int(input("Enter Base Salary: "))
Bonus_Percentage = int(input("Enter Bonus %: "))
Bonus = (Bonus_Percentage/100) * Base_Salary
Total_Salary = Base_Salary + Bonus
print(f"Total Salary = {Total_Salary} ")
