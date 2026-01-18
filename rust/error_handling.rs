// ERROR HANDLING - RESULT AND OPTION
// Demonstrates error handling with Result and Option in Rust

fn main() {
    // Option - value that may or may not exist
    println!("=== Option ===");
    
    let some_value: Option<i32> = Some(5);
    let no_value: Option<i32> = None;
    
    // Match on Option
    match some_value {
        Some(val) => println!("Found: {}", val),
        None => println!("No value"),
    }
    
    // Using if let
    if let Some(val) = some_value {
        println!("Value: {}", val);
    }
    
    // Result - for operations that may fail
    println!("\n=== Result ===");
    
    let result: Result<i32, String> = divide(10.0, 2.0);
    match result {
        Ok(val) => println!("Success: {}", val),
        Err(e) => println!("Error: {}", e),
    }
    
    // Error case
    let result = divide(10.0, 0.0);
    match result {
        Ok(val) => println!("Success: {}", val),
        Err(e) => println!("Error: {}", e),
    }
    
    // Using unwrap (panics on error)
    println!("\n=== Unwrap and Expect ===");
    let result = divide(20.0, 4.0);
    let value = result.unwrap();
    println!("Unwrapped: {}", value);
    
    // Using expect (panic with custom message)
    let result = divide(15.0, 3.0);
    let value = result.expect("Division failed");
    println!("Expected: {}", value);
    
    // Using unwrap_or (default value)
    println!("\n=== Unwrap_or ===");
    let result = divide(10.0, 0.0);
    let value = result.unwrap_or(0);
    println!("Result or 0: {}", value);
    
    // Custom error type
    println!("\n=== Custom Errors ===");
    match parse_age("25") {
        Ok(age) => println!("Age: {}", age),
        Err(e) => println!("Error: {}", e),
    }
    
    match parse_age("-5") {
        Ok(age) => println!("Age: {}", age),
        Err(e) => println!("Error: {}", e),
    }
    
    match parse_age("abc") {
        Ok(age) => println!("Age: {}", age),
        Err(e) => println!("Error: {}", e),
    }
}

fn divide(a: f64, b: f64) -> Result<i32, String> {
    if b == 0.0 {
        Err(String::from("Division by zero"))
    } else {
        Ok((a / b) as i32)
    }
}

fn parse_age(s: &str) -> Result<u32, String> {
    match s.parse::<u32>() {
        Ok(age) => {
            if age < 0 {
                Err(String::from("Age cannot be negative"))
            } else if age > 150 {
                Err(String::from("Age is unrealistic"))
            } else {
                Ok(age)
            }
        }
        Err(_) => Err(String::from("Invalid number format")),
    }
}
