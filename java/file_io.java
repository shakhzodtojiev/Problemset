// FILE I/O
// Demonstrates reading from and writing to files in Java

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.List;

public class FileIO {
    public static void main(String[] args) {
        String filename = "output.txt";
        
        // Write to file
        System.out.println("Writing to file...");
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(filename))) {
            writer.write("This is the first line.\n");
            writer.write("Line 2: Number = 42\n");
            writer.write("Line 3: String = Hello\n");
            System.out.println("File written successfully");
        } catch (IOException e) {
            System.out.println("Error writing to file: " + e.getMessage());
        }
        
        // Read entire file using Files.readAllLines
        System.out.println("\nReading entire file:");
        try {
            List<String> lines = Files.readAllLines(Paths.get(filename));
            for (String line : lines) {
                System.out.println(line);
            }
        } catch (IOException e) {
            System.out.println("Error reading file: " + e.getMessage());
        }
        
        // Read line by line with BufferedReader
        System.out.println("\nReading line by line:");
        try (BufferedReader reader = new BufferedReader(new FileReader(filename))) {
            String line;
            int lineNumber = 1;
            while ((line = reader.readLine()) != null) {
                System.out.println("Line " + lineNumber + ": " + line);
                lineNumber++;
            }
        } catch (IOException e) {
            System.out.println("Error reading file: " + e.getMessage());
        }
        
        // Append to file
        System.out.println("\nAppending to file...");
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(filename, true))) {
            writer.write("Line 4: Appended line\n");
            System.out.println("File appended successfully");
        } catch (IOException e) {
            System.out.println("Error appending to file: " + e.getMessage());
        }
        
        // File information
        System.out.println("\nFile information:");
        File file = new File(filename);
        if (file.exists()) {
            System.out.println("File name: " + file.getName());
            System.out.println("File path: " + file.getAbsolutePath());
            System.out.println("File size: " + file.length() + " bytes");
            System.out.println("Can read: " + file.canRead());
            System.out.println("Can write: " + file.canWrite());
            System.out.println("Is file: " + file.isFile());
            System.out.println("Is directory: " + file.isDirectory());
        } else {
            System.out.println("File does not exist");
        }
    }
}
