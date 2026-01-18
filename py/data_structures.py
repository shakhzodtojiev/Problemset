# LISTS, TUPLES, AND DICTIONARIES
# Demonstrates common data structures in Python

# LIST - ordered, mutable collection
numbers = [10, 20, 30, 40, 50]
print("List:", numbers)
print("First element:", numbers[0])
print("Last element:", numbers[-1])

# List operations
numbers.append(60)  # Add element
numbers.extend([70, 80])  # Add multiple elements
numbers.insert(0, 5)  # Insert at position
print("After modifications:", numbers)

# List comprehension
squares = [x**2 for x in range(1, 6)]
print("Squares:", squares)

# TUPLE - ordered, immutable collection
coordinates = (10, 20, 30)
print("\nTuple:", coordinates)
print("Second element:", coordinates[1])

# Unpacking tuple
x, y, z = coordinates
print(f"Unpacked: x={x}, y={y}, z={z}")

# DICTIONARY - key-value pairs
person = {
    "name": "Alice",
    "age": 25,
    "city": "New York",
    "skills": ["Python", "Java", "C++"]
}

print("\nDictionary:", person)
print("Name:", person["name"])
print("Age:", person.get("age"))

# Dictionary operations
person["email"] = "alice@example.com"  # Add new key
person["age"] = 26  # Update value
print("After update:", person)

# Iterate dictionary
print("\nIterating dictionary:")
for key, value in person.items():
    print(f"{key}: {value}")

# Dictionary comprehension
squares_dict = {x: x**2 for x in range(1, 6)}
print("\nSquares dict:", squares_dict)
