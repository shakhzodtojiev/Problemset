// FUNCTIONS
// Demonstrates function definition and calling in Rust

// Simple function
fn add(a: i32, b: i32) -> i32 {
    a + b  // No semicolon = return value (expression)
}

// Function with multiple return (using tuple)
fn divide(a: f64, b: f64) -> Result<f64, String> {
    if b == 0.0 {
        Err(String::from("Division by zero"))
    } else {
        Ok(a / b)
    }
}

// Function with reference parameter
fn increment(x: &mut i32) {
    *x += 1;
}

// Generic function
fn largest<T: PartialOrd + Copy>(list: &[T]) -> T {
    let mut largest = list[0];
    
    for &item in list.iter() {
        if item > largest {
            largest = item;
        }
    }
    
    largest
}

// Function returning closure (function as value)
fn get_multiplier(factor: i32) -> impl Fn(i32) -> i32 {
    move |x: i32| x * factor
}

fn main() {
    // Call functions
    println!("10 + 20 = {}", add(10, 20));
    
    // Handling Result
    match divide(10.0, 2.0) {
        Ok(result) => println!("10 / 2 = {}", result),
        Err(e) => println!("Error: {}", e),
    }
    
    match divide(10.0, 0.0) {
        Ok(result) => println!("Result: {}", result),
        Err(e) => println!("Error: {}", e),
    }
    
    // Pass by mutable reference
    let mut num = 5;
    println!("Before: {}", num);
    increment(&mut num);
    println!("After: {}", num);
    
    // Generic function
    let numbers = vec![10, 20, 30, 40, 50];
    println!("Largest: {}", largest(&numbers));
    
    // Closure as function value
    let multiply_by_3 = get_multiplier(3);
    println!("5 * 3 = {}", multiply_by_3(5));
}
