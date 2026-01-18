# FILE I/O
# Demonstrates reading from and writing to files in Python

# Writing to a file
print("Writing to file...")
with open("output.txt", "w") as file:
    file.write("This is the first line.\n")
    file.write("Line 2: Number = 42\n")
    file.write("Line 3: String = Hello\n")

print("File written successfully")

# Reading from a file
print("\nReading from file...")
with open("output.txt", "r") as file:
    content = file.read()
    print(content)

# Reading line by line
print("Reading line by line:")
with open("output.txt", "r") as file:
    for line in file:
        print(line.rstrip())  # rstrip removes newline

# Reading into a list
print("\nReading into a list:")
with open("output.txt", "r") as file:
    lines = file.readlines()
    for i, line in enumerate(lines):
        print(f"Line {i+1}: {line.rstrip()}")

# Appending to a file
print("\nAppending to file...")
with open("output.txt", "a") as file:
    file.write("Line 4: Appended line\n")

# Reading modified file
print("File after append:")
with open("output.txt", "r") as file:
    for line in file:
        print(line.rstrip())

# Check if file exists
import os
if os.path.exists("output.txt"):
    print("\nFile exists!")
    print("File size:", os.path.getsize("output.txt"), "bytes")
