// COLLECTIONS - VECTORS AND HASHMAPS
// Demonstrates vectors and hashmaps in Rust

use std::collections::HashMap;

fn main() {
    // Vector - growable array
    let mut numbers: Vec<i32> = Vec::new();
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);
    
    println!("Vector: {:?}", numbers);
    println!("Length: {}", numbers.len());
    
    // Vector macro (shorthand)
    let fruits = vec!["apple", "banana", "cherry"];
    println!("Fruits: {:?}", fruits);
    
    // Accessing elements
    println!("First fruit: {}", fruits[0]);
    
    // Using get (safer alternative)
    match fruits.get(1) {
        Some(fruit) => println!("Second fruit: {}", fruit),
        None => println!("Not found"),
    }
    
    // Iterating vector
    println!("Iterating:");
    for (index, &fruit) in fruits.iter().enumerate() {
        println!("{}: {}", index, fruit);
    }
    
    // Vector methods
    numbers.pop();  // Remove last element
    numbers.remove(0);  // Remove at index
    println!("After modifications: {:?}", numbers);
    
    // HashMap - key-value pairs
    let mut person: HashMap<&str, &str> = HashMap::new();
    person.insert("name", "Alice");
    person.insert("city", "New York");
    person.insert("email", "alice@example.com");
    
    println!("\nHashMap: {:?}", person);
    println!("Name: {}", person.get("name").unwrap_or(&"Unknown"));
    
    // Iterating HashMap
    println!("Iterating HashMap:");
    for (key, value) in &person {
        println!("{}: {}", key, value);
    }
    
    // HashMap with different types
    let mut scores: HashMap<String, i32> = HashMap::new();
    scores.insert(String::from("Alice"), 95);
    scores.insert(String::from("Bob"), 87);
    scores.insert(String::from("Charlie"), 92);
    
    println!("\nScores: {:?}", scores);
    
    // Check if key exists
    if scores.contains_key("Alice") {
        println!("Alice's score: {}", scores["Alice"]);
    }
}
