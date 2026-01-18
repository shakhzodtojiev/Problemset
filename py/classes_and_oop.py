# OBJECT-ORIENTED PROGRAMMING - CLASSES
# Demonstrates classes, objects, and inheritance in Python

# Define a class
class Person:
    # Class variable
    species = "Homo sapiens"
    
    # Constructor
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    # Method
    def introduce(self):
        print(f"My name is {self.name} and I am {self.age} years old")
    
    # Method with return value
    def get_info(self):
        return f"{self.name} ({self.age} years)"
    
    # String representation
    def __str__(self):
        return f"Person: {self.name}, Age: {self.age}"

# Inheritance
class Student(Person):
    def __init__(self, name, age, student_id, gpa):
        super().__init__(name, age)
        self.student_id = student_id
        self.gpa = gpa
    
    def introduce(self):
        super().introduce()
        print(f"My student ID is {self.student_id} and GPA is {self.gpa}")

# Create objects
person = Person("Bob", 30)
print(person)
person.introduce()

print("\n" + person.get_info())

# Create student object
student = Student("Alice", 20, "S12345", 3.8)
print(student)
student.introduce()

# Check type and inheritance
print("\nType checks:")
print(f"Is student a Student? {isinstance(student, Student)}")
print(f"Is student a Person? {isinstance(student, Person)}")
