// CONTROL FLOW - IF/ELSE AND LOOPS
// Demonstrates conditional statements and looping in Rust

fn main() {
    // If-else statement
    let score = 85;
    
    if score >= 90 {
        println!("Grade: A");
    } else if score >= 80 {
        println!("Grade: B");
    } else if score >= 70 {
        println!("Grade: C");
    } else {
        println!("Grade: F");
    }
    
    // If as expression (returns value)
    let grade = if score >= 90 {
        "A"
    } else if score >= 80 {
        "B"
    } else {
        "F"
    };
    println!("Grade: {}", grade);
    
    // For loop with range
    println!("For loop (1 to 5):");
    for i in 1..=5 {
        print!("{} ", i);
    }
    println!();
    
    // For loop with array/vector
    let fruits = vec!["apple", "banana", "cherry"];
    println!("Iterating array:");
    for fruit in &fruits {
        println!("{}", fruit);
    }
    
    // While loop
    println!("While loop:");
    let mut count = 3;
    while count > 0 {
        print!("{} ", count);
        count -= 1;
    }
    println!();
    
    // Loop (infinite loop with break)
    println!("Loop with break:");
    let mut num = 0;
    loop {
        if num >= 3 {
            break;
        }
        print!("{} ", num);
        num += 1;
    }
    println!();
}
