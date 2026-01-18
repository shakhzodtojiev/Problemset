# FUNCTIONS
# Demonstrates function definition, arguments, and return values in Python

# Simple function
def add(a, b):
    return a + b

# Function with default parameters
def greet(name="Friend"):
    print(f"Hello, {name}!")

# Function with multiple return values
def get_min_max(numbers):
    return min(numbers), max(numbers)

# Function with variable number of arguments
def sum_all(*args):
    return sum(args)

# Function with keyword arguments
def print_info(name, age, city="Unknown"):
    print(f"Name: {name}, Age: {age}, City: {city}")

# Recursive function
def factorial(n):
    if n <= 1:
        return 1
    return n * factorial(n - 1)

# Lambda function (anonymous function)
square = lambda x: x ** 2

# Main execution
print("Addition:", add(10, 20))

greet()
greet("Alice")

min_val, max_val = get_min_max([5, 2, 8, 1, 9])
print(f"Min: {min_val}, Max: {max_val}")

print("Sum of 1,2,3,4,5:", sum_all(1, 2, 3, 4, 5))

print_info("Bob", 30)
print_info("Charlie", 25, "New York")

print("Factorial of 5:", factorial(5))

print("Square of 7:", square(7))
