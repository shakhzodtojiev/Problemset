// STRUCTS AND IMPL
// Demonstrates structs and impl blocks for methods in Rust

// Define a struct
#[derive(Debug)]
struct Person {
    name: String,
    age: u32,
    email: String,
}

// Implement methods for struct
impl Person {
    // Constructor
    fn new(name: String, age: u32, email: String) -> Person {
        Person { name, age, email }
    }
    
    // Method with &self (borrow)
    fn introduce(&self) {
        println!("Hi, I'm {}, {} years old", self.name, self.age);
    }
    
    // Method with &mut self (mutable borrow)
    fn birthday(&mut self) {
        self.age += 1;
        println!("{} is now {} years old", self.name, self.age);
    }
    
    // Method with self (takes ownership)
    fn into_info(self) -> String {
        format!("{} ({}) - {}", self.name, self.age, self.email)
    }
}

// Another struct
#[derive(Debug)]
struct Rectangle {
    width: u32,
    height: u32,
}

impl Rectangle {
    fn area(&self) -> u32 {
        self.width * self.height
    }
    
    fn perimeter(&self) -> u32 {
        2 * (self.width + self.height)
    }
    
    fn is_square(&self) -> bool {
        self.width == self.height
    }
}

// Enum example
#[derive(Debug)]
enum Color {
    Red,
    Green,
    Blue,
    Custom(u8, u8, u8),  // Tuple variant
}

fn main() {
    // Create struct instance
    let person = Person::new(
        String::from("Alice"),
        25,
        String::from("alice@example.com"),
    );
    
    println!("Person: {:?}", person);
    person.introduce();
    
    // Mutable struct
    let mut person2 = Person::new(
        String::from("Bob"),
        30,
        String::from("bob@example.com"),
    );
    person2.birthday();
    
    // Consuming method
    let info = person2.into_info();
    println!("Info: {}", info);
    // person2 is no longer valid after into_info
    
    // Rectangle struct
    let rect = Rectangle { width: 30, height: 50 };
    println!("\nRectangle: {:?}", rect);
    println!("Area: {}", rect.area());
    println!("Perimeter: {}", rect.perimeter());
    println!("Is square: {}", rect.is_square());
    
    // Enum
    let color1 = Color::Red;
    let color2 = Color::Custom(255, 128, 0);
    println!("\nColors: {:?}, {:?}", color1, color2);
    
    match color2 {
        Color::Red => println!("Red color"),
        Color::Green => println!("Green color"),
        Color::Blue => println!("Blue color"),
        Color::Custom(r, g, b) => println!("Custom RGB({}, {}, {})", r, g, b),
    }
}
