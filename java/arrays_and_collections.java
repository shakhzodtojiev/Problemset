// ARRAYS AND COLLECTIONS
// Demonstrates arrays and common collections in Java

import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

public class ArraysAndCollections {
    public static void main(String[] args) {
        // Array - fixed size
        int[] numbers = {10, 20, 30, 40, 50};
        System.out.println("Array length: " + numbers.length);
        System.out.print("Array: ");
        for (int num : numbers) {
            System.out.print(num + " ");
        }
        System.out.println();
        
        // 2D Array
        int[][] matrix = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        System.out.println("\n2D Array:");
        for (int[] row : matrix) {
            for (int val : row) {
                System.out.print(val + " ");
            }
            System.out.println();
        }
        
        // ArrayList - dynamic list
        List<String> fruits = new ArrayList<>();
        fruits.add("apple");
        fruits.add("banana");
        fruits.add("cherry");
        System.out.println("\nArrayList: " + fruits);
        System.out.println("Size: " + fruits.size());
        System.out.println("First element: " + fruits.get(0));
        
        // HashMap - key-value pairs
        Map<String, Integer> ages = new HashMap<>();
        ages.put("Alice", 25);
        ages.put("Bob", 30);
        ages.put("Charlie", 35);
        
        System.out.println("\nHashMap: " + ages);
        System.out.println("Alice's age: " + ages.get("Alice"));
        
        // HashSet - unique elements
        Set<Integer> uniqueNumbers = new HashSet<>();
        uniqueNumbers.add(5);
        uniqueNumbers.add(10);
        uniqueNumbers.add(5);  // Duplicate, won't be added
        uniqueNumbers.add(15);
        
        System.out.println("\nHashSet: " + uniqueNumbers);
        System.out.println("Size: " + uniqueNumbers.size());
        
        // Iterate collections
        System.out.println("\nIterating HashMap:");
        for (Map.Entry<String, Integer> entry : ages.entrySet()) {
            System.out.println(entry.getKey() + ": " + entry.getValue());
        }
    }
}
