// OBJECT-ORIENTED PROGRAMMING - CLASSES AND INHERITANCE
// Demonstrates classes, objects, and inheritance in Java

// Base class
class Person {
    protected String name;
    protected int age;
    
    // Constructor
    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
    
    // Method
    public void introduce() {
        System.out.println("My name is " + name + " and I am " + age + " years old");
    }
    
    // Getter methods
    public String getName() {
        return name;
    }
    
    public int getAge() {
        return age;
    }
    
    // Setter methods
    public void setAge(int newAge) {
        if (newAge > 0) {
            this.age = newAge;
        }
    }
    
    @Override
    public String toString() {
        return "Person{name='" + name + "', age=" + age + "}";
    }
}

// Subclass (inheritance)
class Student extends Person {
    private String studentId;
    private double gpa;
    
    public Student(String name, int age, String studentId, double gpa) {
        super(name, age);  // Call parent constructor
        this.studentId = studentId;
        this.gpa = gpa;
    }
    
    @Override
    public void introduce() {
        super.introduce();  // Call parent method
        System.out.println("My student ID is " + studentId + " and GPA is " + gpa);
    }
    
    public double getGPA() {
        return gpa;
    }
    
    @Override
    public String toString() {
        return "Student{name='" + name + "', age=" + age + 
               ", studentId='" + studentId + "', gpa=" + gpa + "}";
    }
}

public class ClassesAndInheritance {
    public static void main(String[] args) {
        // Create objects
        Person person = new Person("Bob", 30);
        System.out.println(person);
        person.introduce();
        
        // Modify using setter
        person.setAge(31);
        System.out.println("Updated age: " + person.getAge());
        
        // Inheritance
        System.out.println();
        Student student = new Student("Alice", 20, "S12345", 3.8);
        System.out.println(student);
        student.introduce();
        
        // Type checking
        System.out.println("\nType checking:");
        System.out.println("student instanceof Student: " + (student instanceof Student));
        System.out.println("student instanceof Person: " + (student instanceof Person));
        
        // Polymorphism
        System.out.println("\nPolymorphism:");
        Person p1 = new Person("Charlie", 25);
        Person p2 = new Student("Diana", 19, "S54321", 3.9);
        
        p1.introduce();
        p2.introduce();
    }
}
