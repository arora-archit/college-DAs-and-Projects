#  You are building a shopping cart system. A customer buys three items. Calculate the total cost, including a sales tax of 5%.


# Algorithm
#  Step 1: Input cost of items in the cart.
#  Step 2: Add all costs and find the Total Cost.
#  Step 3: Add 5% sales tax to Total Cost.
#  Step 4: Display Final Cost with Sales Tax

# Code
price1 = int(input("Enter Price of First Item: "))
price2 = int(input("Enter Price of Second Item: "))
price3 = int(input("Enter Price of Third Item: "))
sum = price1 + price2 + price3
taxRate = 0.05
Tax = sum * taxRate
TotalCost = sum + Tax
print(f"${TotalCost}")
