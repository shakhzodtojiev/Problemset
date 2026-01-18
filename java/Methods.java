// FUNCTIONS/METHODS
// Demonstrates method definition and calling in Java

public class Methods {
    
    // Simple method
    public static int add(int a, int b) {
        return a + b;
    }
    
    // Method with no return value
    public static void greet(String name) {
        System.out.println("Hello, " + name + "!");
    }
    
    // Method with default parameter-like behavior
    public static void greetDefault(String name) {
        if (name == null || name.isEmpty()) {
            name = "Friend";
        }
        System.out.println("Hello, " + name + "!");
    }
    
    // Method overloading - same name, different parameters
    public static double add(double a, double b) {
        return a + b;
    }
    
    // Method with variable arguments (varargs)
    public static int sum(int... numbers) {
        int total = 0;
        for (int num : numbers) {
            total += num;
        }
        return total;
    }
    
    // Recursive method
    public static int factorial(int n) {
        if (n <= 1) {
            return 1;
        }
        return n * factorial(n - 1);
    }
    
    // Method that returns multiple values (using array)
    public static int[] getMinMax(int[] arr) {
        int min = arr[0];
        int max = arr[0];
        
        for (int num : arr) {
            if (num < min) min = num;
            if (num > max) max = num;
        }
        
        return new int[]{min, max};
    }
    
    public static void main(String[] args) {
        // Call methods
        System.out.println("10 + 20 = " + add(10, 20));
        System.out.println("10.5 + 20.3 = " + add(10.5, 20.3));
        
        greet("Alice");
        greetDefault(null);
        
        // Varargs
        System.out.println("Sum: " + sum(1, 2, 3, 4, 5));
        
        // Recursion
        System.out.println("Factorial of 5: " + factorial(5));
        
        // Method returning array
        int[] result = getMinMax(new int[]{5, 2, 8, 1, 9});
        System.out.println("Min: " + result[0] + ", Max: " + result[1]);
    }
}
