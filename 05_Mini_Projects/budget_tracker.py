expenses = {}

while True:
    item = input("Enter item (or 'done'): ")
    if item.lower() == 'done':
        break
    cost = float(input("Enter cost: "))
    expenses[item] = cost

total = sum(expenses.values())
print("Total Expenses:", total)
