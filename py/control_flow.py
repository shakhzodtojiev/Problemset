# CONTROL FLOW - IF/ELSE AND LOOPS
# Demonstrates conditional statements and looping in Python

# If-else statement
score = 85

if score >= 90:
    print("Grade: A")
elif score >= 80:
    print("Grade: B")
elif score >= 70:
    print("Grade: C")
else:
    print("Grade: F")

# For loop
print("For loop (1 to 5):")
for i in range(1, 6):
    print(i, end=" ")
print()

# For loop with list
fruits = ["apple", "banana", "cherry"]
for fruit in fruits:
    print(fruit)

# While loop
print("While loop (countdown):")
count = 3
while count > 0:
    print(count, end=" ")
    count -= 1
print()

# List comprehension (Pythonic way)
squares = [x**2 for x in range(1, 6)]
print("Squares:", squares)

# Break and continue
for i in range(1, 11):
    if i == 5:
        continue  # Skip 5
    if i == 8:
        break  # Exit loop at 8
    print(i, end=" ")
print()
