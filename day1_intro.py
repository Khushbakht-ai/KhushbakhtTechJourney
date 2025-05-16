
name = "Khushbakht"
age = 19
favorite_subject = "AI and Python"
is_student = True
hobbies = ["reading", "music", "coding"]
strengths_weaknesses = {"strength": "consistency", "weakness": "impatience"}

print("Hello! My name is", name)
print("I am", age, "years old.")
print("My favorite subject is", favorite_subject)
print("Am I a student?", is_student)
print("My hobbies are:", hobbies)
print("My strengths and weaknesses:")
for key, value in strengths_weaknesses.items():
    print(f"  {key.title()}: {value}")
