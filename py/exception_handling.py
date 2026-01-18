# EXCEPTION HANDLING
# Demonstrates try-except-finally exception handling in Python

# Function that raises exceptions
def divide(a, b):
    if b == 0:
        raise ValueError("Division by zero is not allowed!")
    return a / b

def convert_to_int(value):
    if not isinstance(value, str):
        raise TypeError("Value must be a string")
    return int(value)

# Basic try-except
print("Example 1: Division by zero")
try:
    result = divide(10, 0)
    print(f"Result: {result}")
except ValueError as e:
    print(f"Error caught: {e}")

# Multiple except blocks
print("\nExample 2: Type conversion")
try:
    num = convert_to_int("abc")
    print(f"Number: {num}")
except ValueError:
    print("Error: Invalid number format")
except TypeError as e:
    print(f"Error: {e}")

# Catch all exceptions
print("\nExample 3: General exception handling")
try:
    x = [1, 2, 3]
    print(x[10])
except IndexError:
    print("Error: Index out of range")
except Exception as e:
    print(f"Unexpected error: {e}")

# Try-except-finally
print("\nExample 4: Try-except-finally")
try:
    result = divide(10, 2)
    print(f"Result: {result}")
except ZeroDivisionError:
    print("Cannot divide by zero")
finally:
    print("This always executes")

# Else clause (executes if no exception)
print("\nExample 5: Try-except-else")
try:
    result = divide(10, 2)
except ZeroDivisionError:
    print("Error occurred")
else:
    print(f"Successful result: {result}")
