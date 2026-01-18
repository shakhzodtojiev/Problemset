// VARIABLES AND DATA TYPES
// Demonstrates variable declaration and data types in Java

public class VariablesAndTypes {
    public static void main(String[] args) {
        // Primitive data types
        int age = 25;
        String name = "Alice";
        double height = 5.8;
        float salary = 50000.50f;
        boolean isActive = true;
        char grade = 'A';
        
        System.out.println("Age: " + age);
        System.out.println("Name: " + name);
        System.out.println("Height: " + height);
        System.out.println("Salary: " + salary);
        System.out.println("Is Active: " + isActive);
        System.out.println("Grade: " + grade);
        
        // Type casting
        int x = 10;
        double y = (double) x;
        System.out.println("Casted value: " + y);
        
        // String conversion
        int num = 42;
        String numStr = String.valueOf(num);
        System.out.println("Converted to String: " + numStr);
        
        // Using String.format
        String formatted = String.format("Value: %d, Name: %s", age, name);
        System.out.println(formatted);
    }
}
