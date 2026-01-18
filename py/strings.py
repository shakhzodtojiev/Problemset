# STRINGS
# Demonstrates string manipulation and methods in Python

# String declaration
name = "Alice"
message = "Hello, World!"

print("String:", name)
print("Length:", len(name))

# String slicing
print("First 3 characters:", name[0:3])
print("Last character:", name[-1])
print("Reversed:", name[::-1])

# String methods
text = "  hello world  "
print("Original:", repr(text))
print("Stripped:", text.strip())
print("Uppercase:", text.upper())
print("Lowercase:", text.lower())
print("Capitalized:", text.capitalize())

# String operations
first = "Hello"
second = "World"
combined = first + " " + second
print("Concatenated:", combined)

# String formatting
age = 25
city = "New York"
print(f"I am {age} years old and live in {city}")

# String methods for searching
sentence = "Python is awesome and Python is powerful"
print("Count 'Python':", sentence.count("Python"))
print("Find 'awesome':", sentence.find("awesome"))
print("Replace 'Python' with 'Java':", sentence.replace("Python", "Java"))

# Split and join
words = sentence.split()
print("Words:", words)
print("Joined:", " - ".join(words))

# Check string properties
print("\nString checks:")
print("Is alphabetic:", "ABC".isalpha())
print("Is digit:", "123".isdigit())
print("Is alphanumeric:", "ABC123".isalnum())
