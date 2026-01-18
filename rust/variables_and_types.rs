// VARIABLES AND DATA TYPES
// Demonstrates variable declaration and data types in Rust

fn main() {
    // Immutable variable (default)
    let age = 25;
    let name: String = String::from("Alice");
    
    // Mutable variable
    let mut height: f64 = 5.8;
    height = 5.9;
    
    println!("Age: {}", age);
    println!("Name: {}", name);
    println!("Height: {}", height);
    
    // Primitive types
    let integer: i32 = 42;
    let floating: f32 = 3.14;
    let boolean: bool = true;
    let character: char = 'A';
    
    println!("Integer: {}", integer);
    println!("Float: {}", floating);
    println!("Boolean: {}", boolean);
    println!("Char: {}", character);
    
    // Type casting
    let x: i32 = 10;
    let y: f64 = x as f64;
    println!("Casted: {}", y);
    
    // Constants
    const PI: f64 = 3.14159;
    println!("PI: {}", PI);
    
    // Shadowing (declaring new variable with same name)
    let x = 5;
    let x = x + 1;
    println!("Shadowed x: {}", x);
}
