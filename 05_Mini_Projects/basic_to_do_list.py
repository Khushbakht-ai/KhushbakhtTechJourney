todo = []

while True:
    task = input("Enter task (or 'done'): ")
    if task.lower() == 'done':
        break
    todo.append(task)

print("Your To-Do List:")
for t in todo:
    print("-", t)
