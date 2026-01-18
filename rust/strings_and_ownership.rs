// STRINGS AND OWNERSHIP
// Demonstrates string manipulation and Rust's ownership system

fn main() {
    // String types in Rust
    let s1: &str = "Hello";  // String slice (immutable reference)
    let s2: String = String::from("World");  // String (owned)
    
    println!("String slice: {}", s1);
    println!("String: {}", s2);
    
    // String concatenation
    let mut greeting = String::from("Hello");
    greeting.push_str(", World!");
    println!("Concatenated: {}", greeting);
    
    // String operations
    let text = "Rust is awesome";
    println!("Length: {}", text.len());
    println!("Contains 'awesome': {}", text.contains("awesome"));
    println!("Starts with 'Rust': {}", text.starts_with("Rust"));
    
    // Split string
    let words: Vec<&str> = text.split(" ").collect();
    println!("Words: {:?}", words);
    
    // Replace
    let replaced = text.replace("awesome", "powerful");
    println!("Replaced: {}", replaced);
    
    // Uppercase/Lowercase
    println!("Uppercase: {}", text.to_uppercase());
    println!("Lowercase: {}", text.to_lowercase());
    
    // Ownership and borrowing
    println!("\nOwnership and Borrowing:");
    
    let s = String::from("hello");
    takes_ownership(s);  // s is moved
    // println!("{}", s);  // This would fail - s no longer owns value
    
    let x = 5;
    makes_copy(x);  // i32 is Copy, so x still valid
    println!("x is still valid: {}", x);
    
    // Borrowing (references)
    let s1 = String::from("hello");
    let len = calculate_length(&s1);  // Borrow s1
    println!("String: {}, Length: {}", s1, len);
    
    // Mutable borrowing
    let mut s2 = String::from("hello");
    change_string(&mut s2);
    println!("Changed: {}", s2);
}

fn takes_ownership(s: String) {
    println!("Took ownership: {}", s);
}

fn makes_copy(x: i32) {
    println!("Made copy: {}", x);
}

fn calculate_length(s: &String) -> usize {
    s.len()
}

fn change_string(s: &mut String) {
    s.push_str(" world");
}
