// STRINGS
// Demonstrates string manipulation in Java

public class Strings {
    public static void main(String[] args) {
        // String creation
        String name = "Alice";
        String message = "Hello, World!";
        
        System.out.println("String: " + name);
        System.out.println("Length: " + name.length());
        
        // String concatenation
        String fullText = "Hello " + name + "!";
        System.out.println("Concatenated: " + fullText);
        
        // Substring
        String sub = name.substring(0, 3);
        System.out.println("Substring: " + sub);
        
        // Case conversion
        System.out.println("Uppercase: " + message.toUpperCase());
        System.out.println("Lowercase: " + message.toLowerCase());
        
        // Character operations
        System.out.println("First character: " + message.charAt(0));
        System.out.println("Index of 'W': " + message.indexOf('W'));
        System.out.println("Contains 'World': " + message.contains("World"));
        
        // Replace
        String replaced = message.replace("World", "Java");
        System.out.println("After replace: " + replaced);
        
        // Split
        String[] words = message.split(", ");
        System.out.print("Split: ");
        for (String word : words) {
            System.out.print(word + " ");
        }
        System.out.println();
        
        // Trim whitespace
        String withSpaces = "  hello world  ";
        System.out.println("Original: '" + withSpaces + "'");
        System.out.println("Trimmed: '" + withSpaces.trim() + "'");
        
        // StringBuilder - efficient string concatenation
        StringBuilder sb = new StringBuilder();
        for (int i = 1; i <= 5; i++) {
            sb.append(i).append(" ");
        }
        System.out.println("StringBuilder: " + sb.toString());
        
        // String comparison
        String str1 = "hello";
        String str2 = "hello";
        System.out.println("Equals: " + str1.equals(str2));
        System.out.println("Compare to: " + str1.compareTo(str2));
    }
}
