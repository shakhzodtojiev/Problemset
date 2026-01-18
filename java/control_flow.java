// CONTROL FLOW - IF/ELSE AND LOOPS
// Demonstrates conditional statements and looping in Java

public class ControlFlow {
    public static void main(String[] args) {
        // If-else statement
        int score = 85;
        
        if (score >= 90) {
            System.out.println("Grade: A");
        } else if (score >= 80) {
            System.out.println("Grade: B");
        } else if (score >= 70) {
            System.out.println("Grade: C");
        } else {
            System.out.println("Grade: F");
        }
        
        // Switch statement
        int day = 3;
        switch (day) {
            case 1:
                System.out.println("Monday");
                break;
            case 2:
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            default:
                System.out.println("Other day");
        }
        
        // For loop
        System.out.println("For loop (1 to 5):");
        for (int i = 1; i <= 5; i++) {
            System.out.print(i + " ");
        }
        System.out.println();
        
        // For-each loop
        String[] fruits = {"apple", "banana", "cherry"};
        System.out.println("For-each loop:");
        for (String fruit : fruits) {
            System.out.println(fruit);
        }
        
        // While loop
        System.out.println("While loop:");
        int count = 3;
        while (count > 0) {
            System.out.print(count + " ");
            count--;
        }
        System.out.println();
        
        // Do-while loop
        System.out.println("Do-while loop:");
        int num = 0;
        do {
            System.out.print(num + " ");
            num++;
        } while (num < 3);
        System.out.println();
    }
}
