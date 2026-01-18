// EXCEPTION HANDLING
// Demonstrates try-catch-finally exception handling in Java

import java.io.IOException;

public class ExceptionHandling {
    
    // Method that throws exception
    public static double divide(double a, double b) throws ArithmeticException {
        if (b == 0) {
            throw new ArithmeticException("Division by zero!");
        }
        return a / b;
    }
    
    // Method with checked exception
    public static int parseNumber(String str) throws NumberFormatException {
        return Integer.parseInt(str);
    }
    
    // Custom exception
    static class ValidationException extends Exception {
        public ValidationException(String message) {
            super(message);
        }
    }
    
    public static void validateAge(int age) throws ValidationException {
        if (age < 0) {
            throw new ValidationException("Age cannot be negative");
        }
        if (age > 150) {
            throw new ValidationException("Age is unrealistic");
        }
    }
    
    public static void main(String[] args) {
        // Basic try-catch
        System.out.println("Example 1: Division");
        try {
            double result = divide(10, 2);
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            System.out.println("Error: " + e.getMessage());
        }
        
        // Error case
        try {
            double result = divide(10, 0);
        } catch (ArithmeticException e) {
            System.out.println("Error: " + e.getMessage());
        }
        
        // Multiple catch blocks
        System.out.println("\nExample 2: Number parsing");
        try {
            int num = parseNumber("abc");
            System.out.println("Number: " + num);
        } catch (NumberFormatException e) {
            System.out.println("Error: Invalid number format");
        } catch (Exception e) {
            System.out.println("Unexpected error: " + e.getMessage());
        }
        
        // Try-catch-finally
        System.out.println("\nExample 3: Try-catch-finally");
        try {
            double result = divide(10, 2);
            System.out.println("Result: " + result);
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        } finally {
            System.out.println("This always executes");
        }
        
        // Custom exception
        System.out.println("\nExample 4: Custom exception");
        try {
            validateAge(25);
            System.out.println("Age is valid");
        } catch (ValidationException e) {
            System.out.println("Validation error: " + e.getMessage());
        }
        
        try {
            validateAge(-5);
        } catch (ValidationException e) {
            System.out.println("Validation error: " + e.getMessage());
        }
    }
}
